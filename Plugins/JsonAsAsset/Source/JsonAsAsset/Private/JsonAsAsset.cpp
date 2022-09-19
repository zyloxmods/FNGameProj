// Copyright Epic Games, Inc. All Rights Reserved.

#include "JsonAsAsset.h"
#include "JsonAsAssetStyle.h"
#include "JsonAsAssetCommands.h"
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "HAL/PlatformApplicationMisc.h"
#include "Misc/MessageDialog.h"
#include "Json.h"
#include "Animation/AnimSequence.h"
#include "Factories/CurveFactory.h"
#include "Factories/DataAssetFactory.h"
#include "Misc/FileHelper.h"
#include "Curves/CurveLinearColor.h"
#include "IAssetTools.h"
#include "Engine/SkeletalMeshLODSettings.h"
#include "AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "Animation/BlendSpaceBase.h"
#include "Factories/BlendSpaceFactoryNew.h"
#include "Animation/BlendSpace.h"
#include "Factories/PhysicsAssetFactory.h"
#include "Factories/PhysicalMaterialFactoryNew.h"
#include "ToolMenus.h"

static const FName JsonAsAssetTabName("JsonAsAsset");

#define LOCTEXT_NAMESPACE "FJsonAsAssetModule"

// ---------------------------------------
// ---------------------------------------
/*|| THIS ARE USED TO OVERRIDE PROTECTED VARIABLES  ||*/
/*|| AND ARE NEVER ACCESSED ||*/


// We use this to set variables
// in the LOD asset
class LODAssetDerived : public USkeletalMeshLODSettings {
	public:
		void SetLODGroups(TArray<FSkeletalMeshLODGroupSettings> LODGroupsInput) {
			this->LODGroups = LODGroupsInput;
		}
		void AddLODGroup(FSkeletalMeshLODGroupSettings LODGroupInput) {
			this->LODGroups.Add(LODGroupInput);
		}
		void EmptyLODGroups() {
			this->LODGroups.Empty();
		}
};

// We use this to set variables
// in the blend space asset
class BlendSpaceDerived : public UBlendSpace {
public:
	void SetAxisToScaleAnimationInput(EBlendSpaceAxis AxisToScaleAnimationInput) {
		this->AxisToScaleAnimation = AxisToScaleAnimationInput;
	}
	void SetBlendParameterPrimary(FBlendParameter BlendParametersInput) {
		this->BlendParameters[0] = BlendParametersInput;
	}
	void SetBlendParameterSecondary(FBlendParameter BlendParametersInput) {
		this->BlendParameters[1] = BlendParametersInput;
	}
	void SetInterpolationParamPrimary(FInterpolationParameter InterpolationParamInput) {
		this->InterpolationParam[0] = InterpolationParamInput;
	}
	void SetInterpolationParamSecondary(FInterpolationParameter InterpolationParamInput) {
		this->InterpolationParam[1] = InterpolationParamInput;
	}
	void SetNotifyTriggerMode(ENotifyTriggerMode::Type NotifyTriggerModeInput) {
		this->NotifyTriggerMode = NotifyTriggerModeInput;
	}
};

// ---------------------------------------
// ---------------------------------------

void FJsonAsAssetModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FJsonAsAssetStyle::Initialize();
	FJsonAsAssetStyle::ReloadTextures();

	FJsonAsAssetCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FJsonAsAssetCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FJsonAsAssetModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FJsonAsAssetModule::RegisterMenus));
}

void FJsonAsAssetModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FJsonAsAssetStyle::Shutdown();

	FJsonAsAssetCommands::Unregister();
}

void FJsonAsAssetModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	/*FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FJsonAsAssetModule::PluginButtonClicked()")),
							FText::FromString(TEXT("JsonAsAsset.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);*/


	TArray<FString> OutFileNames;

	void* ParentWindowHandle = nullptr;

	IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
	TSharedPtr<SWindow> MainWindow = MainFrameModule.GetParentWindow();

	if (MainWindow.IsValid() && MainWindow->GetNativeWindow().IsValid())
	{
		ParentWindowHandle = MainWindow->GetNativeWindow()->GetOSWindowHandle();
	}

	IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	if (DesktopPlatform)
	{
		uint32 SelectionFlag = 0;
		DesktopPlatform->OpenFileDialog(ParentWindowHandle, TEXT("Open a JSON file"), TEXT(""), FString(""), TEXT("JSON Files|*.json"), SelectionFlag, OutFileNames);
	}

	if (OutFileNames.Num() != 0 && OutFileNames[0] != "") {
		FString ContentBefore;
		FFileHelper::LoadFileToString(ContentBefore, *OutFileNames[0]);
		
		// For some reason a array
		// without it being in a object.
		FString Content = FString(TEXT("{\"data\": "));
		Content.Append(ContentBefore);
		Content.Append(FString("}"));

		TSharedPtr<FJsonObject> JsonParsed;
		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Content);
		if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
		{
			GLog->Log("JsonAsAsset: Deserialized file, reading the contents.");

			TArray<TSharedPtr<FJsonValue>> DataObjects = JsonParsed->GetArrayField("data");
			for (int32 index = 0; index < DataObjects.Num(); index++)
			{
				TSharedPtr<FJsonObject> DataObject = DataObjects[index]->AsObject();

				FString Type = DataObject->GetStringField("Type");
				FString Name = DataObject->GetStringField("Name");

				// If it's a curve float
				// since those are supported
				// at the moment.
				if (Type == "CurveFloat") {
					GLog->Log("JsonAsAsset: Found a curve by the name of " + Name + ", parsing..");

					// Get the curves by the object
					// tree.
					TArray<TSharedPtr<FJsonValue>> Keys = DataObject->GetObjectField("Properties")->GetObjectField("FloatCurve")->GetArrayField("Keys");

					// Let's create the curve now
					// to add the keys.

					// The path that the file
					// was imported from (RAW)
					FString IMPath = OutFileNames[0];
					FString Path;

					IMPath.Split("FortniteGame/Content/", nullptr, &Path);
					Path.Split("/", &Path, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
					
					FString PathWithGame = "/Game/" + Path + "/" + Name;
					UPackage* Package = CreatePackage(NULL, *PathWithGame);
					UPackage* OutermostPkg = Package->GetOutermost();

					auto CurveFactory = NewObject<UCurveFloatFactory>();
					UCurveFloat* CurveAsset = Cast<UCurveFloat>(CurveFactory->FactoryCreateNew(UCurveFloat::StaticClass(), OutermostPkg, *Name, RF_Standalone | RF_Public, NULL, GWarn));

					FAssetRegistryModule::AssetCreated(CurveAsset);
					CurveAsset->MarkPackageDirty();
					Package->SetDirtyFlag(true);
					CurveAsset->PostEditChange();
					CurveAsset->AddToRoot();
					
					for (int32 key_index = 0; key_index < Keys.Num(); key_index++)
					{
						// RCIM_Cubic
						TSharedPtr<FJsonObject> Key = Keys[key_index]->AsObject();
						ERichCurveInterpMode InterpMode =
							Key->GetStringField("InterpMode") == "RCIM_Linear" ? ERichCurveInterpMode::RCIM_Linear : // Linear
							Key->GetStringField("InterpMode") == "RCIM_Cubic" ? ERichCurveInterpMode::RCIM_Cubic : // Cubic
							Key->GetStringField("InterpMode") == "RCIM_Constant" ? ERichCurveInterpMode::RCIM_Constant : // Constant
							ERichCurveInterpMode::RCIM_None;

						FRichCurveKey RichKey = FRichCurveKey(float(Key->GetNumberField("Time")), float(Key->GetNumberField("Value")), float(Key->GetNumberField("ArriveTangent")), float(Key->GetNumberField("LeaveTangent")), InterpMode);

						CurveAsset->FloatCurve.Keys.Add(RichKey);
					}
				}
				else if (Type == "CurveLinearColor") {
					GLog->Log("JsonAsAsset: Found a linear curve by the name of " + Name + ", parsing..");

					FString ReConstructed = Content;
					int FCIndex = Content.Find("FloatCurves");

					// I spent hours of thinking
					// the ways I could fix FModel's
					// JSON data.

					// Basically FModel doesn't care if
					// a property has the same name, it
					// adds it anyways so there would be
					// two properties with the same name.
					// JSON Don't Work Like That!

					// So that's why we have these lines that
					// split them into RGBA.

					ReConstructed.RemoveAt(FCIndex, 11);
					ReConstructed.InsertAt(FCIndex, "InputR");

					FCIndex = ReConstructed.Find("FloatCurves");
					ReConstructed.RemoveAt(FCIndex, 11);
					ReConstructed.InsertAt(FCIndex, "InputG");

					FCIndex = ReConstructed.Find("FloatCurves");
					ReConstructed.RemoveAt(FCIndex, 11);
					ReConstructed.InsertAt(FCIndex, "InputB");

					FCIndex = ReConstructed.Find("FloatCurves");
					ReConstructed.RemoveAt(FCIndex, 11);
					ReConstructed.InsertAt(FCIndex, "InputA");

					TSharedPtr<FJsonObject> JsonParsedCon;
					TSharedRef<TJsonReader<TCHAR>> JsonReaderCon = TJsonReaderFactory<TCHAR>::Create(ReConstructed);
					if (FJsonSerializer::Deserialize(JsonReaderCon, JsonParsedCon))
					{
						TArray<TSharedPtr<FJsonValue>> CurveI = JsonParsedCon->GetArrayField("data");
						for (int32 indexa = 0; indexa < CurveI.Num(); indexa++)
						{
							TSharedPtr<FJsonObject> ObjectI = CurveI[indexa]->AsObject();

							if (ObjectI->GetStringField("Type") == "CurveLinearColor") {
								FString IMPath = OutFileNames[0];
								FString Path;

								IMPath.Split("FortniteGame/Content/", nullptr, &Path);
								Path.Split("/", &Path, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

								FString PathWithGame = "/Game/" + Path + "/" + Name;
								UPackage* Package = CreatePackage(NULL, *PathWithGame);
								UPackage* OutermostPkg = Package->GetOutermost();

								auto CurveFactory = NewObject<UCurveLinearColorFactory>();
								UCurveLinearColor* LinearCurveAsset = Cast<UCurveLinearColor>(CurveFactory->FactoryCreateNew(UCurveLinearColor::StaticClass(), OutermostPkg, *Name, RF_Standalone | RF_Public, NULL, GWarn));

								FAssetRegistryModule::AssetCreated(LinearCurveAsset);
								LinearCurveAsset->MarkPackageDirty();
								Package->SetDirtyFlag(true);
								LinearCurveAsset->PostEditChange();
								LinearCurveAsset->AddToRoot();

								for (const TPair<FString, TSharedPtr<FJsonValue>>& pair : ObjectI->GetObjectField("Properties")->Values)
								{
									TArray<TSharedPtr<FJsonValue>> Keys = pair.Value->AsObject()->GetArrayField("Keys");

									// Empty the array for the new curves
									LinearCurveAsset->FloatCurves[pair.Key.EndsWith("R") ? 0 : pair.Key.EndsWith("G") ? 1 : pair.Key.EndsWith("B") ? 2 : 3].Keys.Empty();
									
									FRichCurve RichCurveObject = FRichCurve();

									for (int32 key_index = 0; key_index < Keys.Num(); key_index++)
									{
										// RCIM_Cubic
										TSharedPtr<FJsonObject> Key = Keys[key_index]->AsObject();
										ERichCurveInterpMode InterpMode =
											Key->GetStringField("InterpMode") == "RCIM_Linear" ? ERichCurveInterpMode::RCIM_Linear : // Linear
											Key->GetStringField("InterpMode") == "RCIM_Cubic" ? ERichCurveInterpMode::RCIM_Cubic : // Cubic
											Key->GetStringField("InterpMode") == "RCIM_Constant" ? ERichCurveInterpMode::RCIM_Constant : // Constant
											ERichCurveInterpMode::RCIM_None;

										FRichCurveKey RichKey = FRichCurveKey(float(Key->GetNumberField("Time")), float(Key->GetNumberField("Value")), float(Key->GetNumberField("ArriveTangent")), float(Key->GetNumberField("LeaveTangent")), InterpMode);

										LinearCurveAsset->FloatCurves[pair.Key.EndsWith("R") ? 0 : pair.Key.EndsWith("G") ? 1 : pair.Key.EndsWith("B") ? 2 : 3].Keys.Add(RichKey);
									}
								}
							}
						}
					}
				}
				else if (Type == "CurveVector") {
					FText DialogText = FText::FromString(TEXT("CurveVectors are not supported at the moment, only reason being is that I don't have a json file to test with. Contact me at Tector#7383 if you do."));
					FMessageDialog::Open(EAppMsgType::Ok, DialogText);
				}
			/*	else if (Type == "AnimSequence") {
				GLog->Log("JsonAsAsset: Found a facial curve from the animation of " + Name + ", parsing..");


				TArray<TSharedPtr<FJsonValue>> Keys = DataObject->GetObjectField("Properties")->GetObjectField("FloatCurves")->GetArrayField("Keys");

				for (int32 key_index = 0; key_index < Keys.Num(); key_index++)
				{
					// RCIM_Cubic
					TSharedPtr<FJsonObject> Key = Keys[key_index]->AsObject();
					ERichCurveInterpMode InterpMode =
						Key->GetStringField("InterpMode") == "RCIM_Linear" ? ERichCurveInterpMode::RCIM_Linear : // Linear
						Key->GetStringField("InterpMode") == "RCIM_Cubic" ? ERichCurveInterpMode::RCIM_Cubic : // Cubic
						Key->GetStringField("InterpMode") == "RCIM_Constant" ? ERichCurveInterpMode::RCIM_Constant : // Constant
						ERichCurveInterpMode::RCIM_None;

					FRichCurveKey RichKey = FRichCurveKey(float(Key->GetNumberField("Time")), float(Key->GetNumberField("Value")), float(Key->GetNumberField("ArriveTangent")), float(Key->GetNumberField("LeaveTangent")), InterpMode);

					AnimSequence->FloatCurve.Keys.Add(RichKey);
				}
}*/
				// USkeletalMeshLODSettings
				else if(Type == "SkeletalMeshLODSettings") {
					GLog->Log("JsonAsAsset: Found a skeletal mesh lod asset by the name of " + Name + ", parsing..");

					// The path that the file
					// was imported from (RAW)

					FString IMPath = OutFileNames[0];
					FString Path;

					IMPath.Split("FortniteGame/Content/", nullptr, &Path);
					Path.Split("/", &Path, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

					FString PathWithGame = "/Game/" + Path + "/" + Name;
					UPackage* Package = CreatePackage(NULL, *PathWithGame);
					UPackage* OutermostPkg = Package->GetOutermost();

					// We create assets using these lines
					// and by using the Data Asset factory.

					auto DataAssetFactory = NewObject<UDataAssetFactory>();
					LODAssetDerived* LODDataAsset = Cast<LODAssetDerived>(DataAssetFactory->FactoryCreateNew(USkeletalMeshLODSettings::StaticClass(), OutermostPkg, *Name, RF_Standalone | RF_Public, NULL, GWarn));
					FAssetRegistryModule::AssetCreated(LODDataAsset);
					LODDataAsset->MarkPackageDirty();
					Package->SetDirtyFlag(true);
					LODDataAsset->PostEditChange();
					LODDataAsset->AddToRoot();

					// Empty the LODGroups
					// (there's pre-defined)
					LODDataAsset->EmptyLODGroups();

					// The LODGroups inside FModel's json.
					TArray<TSharedPtr<FJsonValue>> LODGroupsObject = DataObject->GetObjectField("Properties")->GetArrayField("LODGroups");

					// Iterate through each lod group
					// to add into the emptied array.
					for (int32 lod_group_index = 0; lod_group_index < LODGroupsObject.Num(); lod_group_index++)
					{
						TSharedPtr<FJsonObject> LODDataObject = LODGroupsObject[lod_group_index]->AsObject();
						FSkeletalMeshLODGroupSettings SkeletalMeshLODGroup = FSkeletalMeshLODGroupSettings();
						const TSharedPtr<FJsonObject>* BakePose;

						// If there is a BakePose animation
						// sequence, then we handle the reference.
						if (LODDataObject->TryGetObjectField("BakePose", BakePose) == true) {
							FStringAssetReference BakePoseReference;
							
							// Get the base pose type. (AnimSequence)
							FString BakePoseType;
							FString BakePoseName;
							BakePose->Get()->GetStringField("ObjectName").Split(" ", &BakePoseType, &BakePoseName);
							FString BakePosePath;
							BakePose->Get()->GetStringField("ObjectPath").Split(".", &BakePosePath, nullptr);
							// Create the reference
							BakePoseReference = FStringAssetReference(BakePoseType + "'" + BakePosePath + "." + BakePoseName + "'");

							// Now we use the reference, and load the asset
							// to be used in the data asset.
							UAnimSequence* BakePoseSequence = Cast<UAnimSequence>(BakePoseReference.TryLoad());
							SkeletalMeshLODGroup.BakePose = BakePoseSequence;
						}

						SkeletalMeshLODGroup.LODHysteresis = LODDataObject->GetNumberField("LODHysteresis");
						SkeletalMeshLODGroup.WeightOfPrioritization = LODDataObject->GetNumberField("WeightOfPrioritization");
						SkeletalMeshLODGroup.ScreenSize = FPerPlatformFloat(LODDataObject->GetObjectField("ScreenSize")->GetNumberField("Default"));

						// The first LOD element does not have
						// the following variables:
						//
						// 1. BoneFilterActionOption
						// 2. BoneList
						if (lod_group_index != 0) {
							// Set the BoneFilterActionOption using variables provided
							SkeletalMeshLODGroup.BoneFilterActionOption =
								LODDataObject->GetStringField("BoneFilterActionOption").EndsWith("Remove") ? EBoneFilterActionOption::Remove :
								LODDataObject->GetStringField("BoneFilterActionOption").EndsWith("Keep") ? EBoneFilterActionOption::Keep
									: EBoneFilterActionOption::Invalid;

							// Add all the bones under: BoneList
							for (int32 bone_list_index = 0; bone_list_index < LODDataObject->GetArrayField("BoneList").Num(); bone_list_index++)
							{
								TSharedPtr<FJsonObject> BoneListed = LODDataObject->GetArrayField("BoneList")[bone_list_index]->AsObject();
								FBoneFilter BoneFilter;

								BoneFilter.bExcludeSelf = BoneListed->GetBoolField("bExcludeSelf");
								BoneFilter.BoneName = FName(*BoneListed->GetStringField("BoneName"));

								SkeletalMeshLODGroup.BoneList.Add(BoneFilter);
							}
						}

						// Add all the bones under: BonesToPrioritize
						for (int32 bones_to_prior_index = 0; bones_to_prior_index < LODDataObject->GetArrayField("BonesToPrioritize").Num(); bones_to_prior_index++)
						{
							FName BonePrioritized = FName(*LODDataObject->GetArrayField("BonesToPrioritize")[bones_to_prior_index]->AsString());

							SkeletalMeshLODGroup.BonesToPrioritize.Add(BonePrioritized);
						}

						// Here we are going to do the reduction settings
						// that is the core of the LOD asset.
						FSkeletalMeshOptimizationSettings OptimizationSettings;
						TSharedPtr<FJsonObject> ReductionSettings = LODDataObject->GetObjectField("ReductionSettings");
						
						OptimizationSettings.BaseLOD = ReductionSettings->GetIntegerField("BaseLOD");
						OptimizationSettings.bEnforceBoneBoundaries = ReductionSettings->GetBoolField("bEnforceBoneBoundaries");
						OptimizationSettings.bLockColorBounaries = ReductionSettings->GetBoolField("bLockColorBounaries");
						OptimizationSettings.bLockEdges = ReductionSettings->GetBoolField("bLockEdges");
						OptimizationSettings.bRecalcNormals = ReductionSettings->GetBoolField("bRecalcNormals");
						OptimizationSettings.bRemapMorphTargets = ReductionSettings->GetBoolField("bRemapMorphTargets");
						OptimizationSettings.MaxBonesPerVertex = ReductionSettings->GetIntegerField("MaxBonesPerVertex");
						OptimizationSettings.MaxDeviationPercentage = ReductionSettings->GetNumberField("MaxDeviationPercentage");
						OptimizationSettings.MaxNumOfTriangles = ReductionSettings->GetIntegerField("MaxNumOfTriangles");
						OptimizationSettings.MaxNumOfVerts = ReductionSettings->GetIntegerField("MaxNumOfVerts");
						OptimizationSettings.NormalsThreshold = ReductionSettings->GetNumberField("NormalsThreshold");
						OptimizationSettings.NumOfTrianglesPercentage = ReductionSettings->GetNumberField("NumOfTrianglesPercentage");
						OptimizationSettings.NumOfVertPercentage = ReductionSettings->GetNumberField("NumOfVertPercentage");
						OptimizationSettings.VolumeImportance = ReductionSettings->GetNumberField("VolumeImportance");
						OptimizationSettings.WeldingThreshold = ReductionSettings->GetNumberField("WeldingThreshold");

						OptimizationSettings.ReductionMethod =
							ReductionSettings->GetStringField("ReductionMethod").EndsWith("SMOT_NumOfTriangles") ? SkeletalMeshOptimizationType::SMOT_NumOfTriangles :
							ReductionSettings->GetStringField("ReductionMethod").EndsWith("SMOT_MaxDeviation") ? SkeletalMeshOptimizationType::SMOT_MaxDeviation :
							ReductionSettings->GetStringField("ReductionMethod").EndsWith("SMOT_TriangleOrDeviation") ? SkeletalMeshOptimizationType::SMOT_TriangleOrDeviation :
							SkeletalMeshOptimizationType::SMOT_MAX;

						OptimizationSettings.ShadingImportance =
							ReductionSettings->GetStringField("ShadingImportance").EndsWith("SMOI_Off") ? SkeletalMeshOptimizationImportance::SMOI_Off :
							ReductionSettings->GetStringField("ShadingImportance").EndsWith("SMOI_Lowest") ? SkeletalMeshOptimizationImportance::SMOI_Lowest :
							ReductionSettings->GetStringField("ShadingImportance").EndsWith("SMOI_Low") ? SkeletalMeshOptimizationImportance::SMOI_Low :
							ReductionSettings->GetStringField("ShadingImportance").EndsWith("SMOI_Normal") ? SkeletalMeshOptimizationImportance::SMOI_Normal :
							ReductionSettings->GetStringField("ShadingImportance").EndsWith("SMOI_High") ? SkeletalMeshOptimizationImportance::SMOI_High :
							ReductionSettings->GetStringField("ShadingImportance").EndsWith("SMOI_Highest") ? SkeletalMeshOptimizationImportance::SMOI_Highest :
							SkeletalMeshOptimizationImportance::SMOI_MAX;

						OptimizationSettings.SilhouetteImportance =
							ReductionSettings->GetStringField("SilhouetteImportance").EndsWith("SMOI_Off") ? SkeletalMeshOptimizationImportance::SMOI_Off :
							ReductionSettings->GetStringField("SilhouetteImportance").EndsWith("SMOI_Lowest") ? SkeletalMeshOptimizationImportance::SMOI_Lowest :
							ReductionSettings->GetStringField("SilhouetteImportance").EndsWith("SMOI_Low") ? SkeletalMeshOptimizationImportance::SMOI_Low :
							ReductionSettings->GetStringField("SilhouetteImportance").EndsWith("SMOI_Normal") ? SkeletalMeshOptimizationImportance::SMOI_Normal :
							ReductionSettings->GetStringField("SilhouetteImportance").EndsWith("SMOI_High") ? SkeletalMeshOptimizationImportance::SMOI_High :
							ReductionSettings->GetStringField("SilhouetteImportance").EndsWith("SMOI_Highest") ? SkeletalMeshOptimizationImportance::SMOI_Highest :
							SkeletalMeshOptimizationImportance::SMOI_MAX;

						OptimizationSettings.SkinningImportance =
							ReductionSettings->GetStringField("SkinningImportance").EndsWith("SMOI_Off") ? SkeletalMeshOptimizationImportance::SMOI_Off :
							ReductionSettings->GetStringField("SkinningImportance").EndsWith("SMOI_Lowest") ? SkeletalMeshOptimizationImportance::SMOI_Lowest :
							ReductionSettings->GetStringField("SkinningImportance").EndsWith("SMOI_Low") ? SkeletalMeshOptimizationImportance::SMOI_Low :
							ReductionSettings->GetStringField("SkinningImportance").EndsWith("SMOI_Normal") ? SkeletalMeshOptimizationImportance::SMOI_Normal :
							ReductionSettings->GetStringField("SkinningImportance").EndsWith("SMOI_High") ? SkeletalMeshOptimizationImportance::SMOI_High :
							ReductionSettings->GetStringField("SkinningImportance").EndsWith("SMOI_Highest") ? SkeletalMeshOptimizationImportance::SMOI_Highest :
							SkeletalMeshOptimizationImportance::SMOI_MAX;

						OptimizationSettings.TerminationCriterion =
							ReductionSettings->GetStringField("TerminationCriterion").EndsWith("SMTC_NumOfTriangles") ? SkeletalMeshTerminationCriterion::SMTC_NumOfTriangles :
							ReductionSettings->GetStringField("TerminationCriterion").EndsWith("SMTC_NumOfVerts") ? SkeletalMeshTerminationCriterion::SMTC_NumOfVerts :
							ReductionSettings->GetStringField("TerminationCriterion").EndsWith("SMTC_TriangleOrVert") ? SkeletalMeshTerminationCriterion::SMTC_TriangleOrVert :
							ReductionSettings->GetStringField("TerminationCriterion").EndsWith("SMTC_AbsNumOfTriangles") ? SkeletalMeshTerminationCriterion::SMTC_AbsNumOfTriangles :
							ReductionSettings->GetStringField("TerminationCriterion").EndsWith("SMTC_AbsNumOfVerts") ? SkeletalMeshTerminationCriterion::SMTC_AbsNumOfVerts :
							ReductionSettings->GetStringField("TerminationCriterion").EndsWith("SMTC_AbsTriangleOrVert") ? SkeletalMeshTerminationCriterion::SMTC_AbsTriangleOrVert :
							SkeletalMeshTerminationCriterion::SMTC_MAX;

						OptimizationSettings.TextureImportance =
							ReductionSettings->GetStringField("TextureImportance").EndsWith("SMOI_Off") ? SkeletalMeshOptimizationImportance::SMOI_Off :
							ReductionSettings->GetStringField("TextureImportance").EndsWith("SMOI_Lowest") ? SkeletalMeshOptimizationImportance::SMOI_Lowest :
							ReductionSettings->GetStringField("TextureImportance").EndsWith("SMOI_Low") ? SkeletalMeshOptimizationImportance::SMOI_Low :
							ReductionSettings->GetStringField("TextureImportance").EndsWith("SMOI_Normal") ? SkeletalMeshOptimizationImportance::SMOI_Normal :
							ReductionSettings->GetStringField("TextureImportance").EndsWith("SMOI_High") ? SkeletalMeshOptimizationImportance::SMOI_High :
							ReductionSettings->GetStringField("TextureImportance").EndsWith("SMOI_Highest") ? SkeletalMeshOptimizationImportance::SMOI_Highest :
							SkeletalMeshOptimizationImportance::SMOI_MAX;

						SkeletalMeshLODGroup.ReductionSettings = OptimizationSettings;
						LODDataAsset->AddLODGroup(SkeletalMeshLODGroup);
					}
				}
			}
		}
	}
}

void FJsonAsAssetModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FJsonAsAssetCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FJsonAsAssetCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FJsonAsAssetModule, JsonAsAsset)