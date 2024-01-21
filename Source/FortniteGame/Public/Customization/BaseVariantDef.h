// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "McpItemDefinitionBase.h"
#include "GameplayTags.h"
#include "FortniteGame/FortniteGame.h"
#include "Particles/ParticleSystem.h"
#include "NiagaraSystem.h"
#include "Items/FortAccountItemDefinition.h"
#include "Engine/EngineTypes.h"
#include "CustomCharacterPartData.h"
#include "Sound/SoundEffectSource.h"
#include "Customization/CustomCharacterPart.h"
#include "BaseVariantDef.generated.h"

class UAthenaCosmeticItemDefinition;
/**
 * 
 */
USTRUCT(BlueprintType)
struct FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		bool bStartUnlocked = false;

	UPROPERTY(EditAnywhere)
		bool bIsDefault = false;

	UPROPERTY(EditAnywhere)
		bool bHideIfNotOwned = false;

	UPROPERTY(EditAnywhere)
		FGameplayTag CustomizationVariantTag;

	UPROPERTY(EditAnywhere)
		FText VariantName;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> PreviewImage;

	UPROPERTY(EditAnywhere)
		FText UnlockRequirements;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortAccountItemDefinition> UnlockingItemDef;
};

USTRUCT(BlueprintType)
struct FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName ParamName;
};

USTRUCT(BlueprintType)
struct FMaterialVariants
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> MaterialToSwap;

	UPROPERTY(EditAnywhere)
		FName ComponentToOverride;

	UPROPERTY(EditAnywhere)
		FName CascadeMaterialName;

	UPROPERTY(EditAnywhere)
		int MaterialOverrideIndex = 0;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};

USTRUCT(BlueprintType)
struct FMaterialTextureVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture> Value;
};

USTRUCT(BlueprintType)
struct FMaterialFloatVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float Value = 0.0f;
};

USTRUCT(BlueprintType)
struct FMaterialVectorVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FLinearColor Value;
};

USTRUCT(BlueprintType)
struct FMaterialParamterDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> MaterialToAlter;

	UPROPERTY(EditAnywhere)
		FName CascadeMaterialName;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVectorVariant> ColorParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialTextureVariant> TextureParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialFloatVariant> FloatParams;
};


USTRUCT(BlueprintType)
struct FParticleVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFXSystemAsset> ParticleSystemToAlter;

	UPROPERTY(EditAnywhere)
		FName ComponentToOverride;

	UPROPERTY(EditAnywhere)
	   TSoftObjectPtr<UFXSystemAsset> OverrideParticleSystem; 

	UPROPERTY(EditAnywhere)
	bool bResetParameterOverridesOnSwap = false;
};

USTRUCT(BlueprintType)
struct FVectorParticleParameter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FVector Value;

	UPROPERTY(EditAnywhere)
		FName                       ParameterName;

};

USTRUCT(BlueprintType)
struct FVectorParamVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FVector Value;
};

USTRUCT(BlueprintType)
struct FParticleParamterVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFXSystemAsset> ParticleSystemToAlter;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVectorVariant> ColorParams;

	UPROPERTY(EditAnywhere)
		TArray<FVectorParamVariant>  VectorParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialFloatVariant> FloatParams;
};

USTRUCT(BlueprintType)
struct FFortPortableSoftParticles 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	EFXType FXType = EFXType::BackpackBling; 

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UNiagaraSystem> NiagaraVersion;

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UParticleSystem> CascadeVersion; 
};


USTRUCT(BlueprintType)
struct FFoleySoundVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<UObject*> LibrariesToAdd;

	UPROPERTY(EditAnywhere)
		TArray<UObject*> LibrariesToRemove;

};

USTRUCT(BlueprintType)
struct FSocketTransformVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName SourceSocketName;

	UPROPERTY(EditAnywhere)
		FName  OverridSocketName;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<USkeletalMesh> SourceObjectToModify;
};

USTRUCT(BlueprintType)
struct FScriptedActionVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTag ActionTag;
};

USTRUCT(BlueprintType)
struct FCosmeticMetaTagContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer MetaTagsToApply;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer MetaTagsToRemove;
};

USTRUCT(BlueprintType)
struct FScriptedActionVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FScriptedActionVariant> VariantActions;

	UPROPERTY(EditAnywhere)
	FCosmeticMetaTagContainer MetaTags;
};
USTRUCT(BlueprintType)
struct FVariantParticleSystemInitializerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FName ParticleComponentName;     

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFXSystemAsset> ParticleSystem;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USkeletalMesh> MeshToBindTO;

	UPROPERTY(EditAnywhere)
	 FName  AttachSocketName;                                         

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EAttachmentRule LocationRule;                                            

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EAttachmentRule RotationRule;                                            

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EAttachmentRule ScaleRule;                                             

	UPROPERTY(EditAnywhere)
	bool bWeldSimulatedBodies = false;                                   

};

USTRUCT(BlueprintType)
struct FMeshVariant 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<USkeletalMesh> MeshToSwap; // 0x00(0x28)

	UPROPERTY(EditAnywhere)
	 FName ComponentToOverride; // 0x28(0x08)

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<USkeletalMesh> OverrideMesh; // 0x30(0x28)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EAnimInstanceClassSwapType                         AnimInstanceClassSwapType;

	UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> AnimInstanceClassToSwap;

		UPROPERTY(EditAnywhere)
		TSoftClassPtr<UObject> OverrideAnimInstanceClass;
};

USTRUCT(BlueprintType)
struct FSoundVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> SoundToSwap;

	UPROPERTY(EditAnywhere)
		FName ComponentToOverride;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> OverrideSound;

};

USTRUCT(BlueprintType)
struct FMaterialVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialParamterDef>                VariantMaterialParams;

	UPROPERTY(EditAnywhere)
		TArray<FSoundVariant>                       VariantSounds;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor)

	UPROPERTY(EditAnywhere)
		TArray<FFoleySoundVariant>                  VariantFoley;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor)

	UPROPERTY(EditAnywhere)
		FCosmeticMetaTagContainer                   MetaTags;

};

USTRUCT(BlueprintType)
struct FPartVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UCustomCharacterPart>> VariantParts;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialParamterDef> VariantMaterialParams;
	
	UPROPERTY(EditAnywhere)
	TArray<FVariantParticleSystemInitializerData> InitalParticelSystemData;
	
	UPROPERTY(EditAnywhere)
		TArray<FParticleVariant> VariantParticles;

	UPROPERTY(EditAnywhere)
		TArray<FParticleParamterVariant> VariantParticleParams;

	UPROPERTY(EditAnywhere)
		TArray<FSoundVariant> VariantSounds;

	UPROPERTY(EditAnywhere)
		TArray<FFoleySoundVariant> VariantFoley;

	UPROPERTY(EditAnywhere)
		TArray<FSocketTransformVariant> SocketTransforms;

	UPROPERTY(EditAnywhere)
		TArray<FScriptedActionVariant> VariantActions;

	UPROPERTY(EditAnywhere)
		TArray<FMeshVariant> VariantMeshes;

	UPROPERTY(EditAnywhere)
		FCosmeticMetaTagContainer MetaTags;

};

USTRUCT(BlueprintType)
struct FEmoteMontageSwap
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> ToSwapFrom;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> ToSwapTo;
};

USTRUCT(BlueprintType)
struct FEmoteMontageVariantDef : public FBaseVariantDef 
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 TArray<FEmoteMontageSwap> MontageSwaps; 

	UPROPERTY(EditAnywhere)
	 FCosmeticMetaTagContainer MetaTags;
};

USTRUCT(BlueprintType)
struct FLoadoutVariantDef : public FPartVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAthenaCosmeticItemDefinition> LoadoutItem;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	ELoadoutVariantInsertType LocationToInsert;                                         

	UPROPERTY(EditAnywhere)
	bool bItemExpectedInLoadout = false;                                 

	UPROPERTY(EditAnywhere)
	bool bRequireItemToBeCurrent = false;

	UPROPERTY(EditAnywhere)
	bool bIgnoreRequireItemToBeCurrentInFrontEnd = false;

	UPROPERTY(EditAnywhere)
	TArray<FEmoteMontageVariantDef> VariantEmoteMontages;                                   
};
USTRUCT(BlueprintType)
struct FItemTextureVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;

	UPROPERTY(EditAnywhere)
	 FName ParamName;                                               

	UPROPERTY(EditAnywhere)
	 FString DefaultSelectedItem;                                    
};

USTRUCT(BlueprintType)
struct FItemTextureVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FItemTextureVariant InnerDef;                                              

	UPROPERTY(EditAnywhere)
	struct FCosmeticMetaTagContainer MetaTags;                                                

	UPROPERTY(EditAnywhere)
	struct FGameplayTagContainer FilterOutItemsWithTags;                                   

	UPROPERTY(EditAnywhere)
	bool bWantsSprays = false;                                            

	UPROPERTY(EditAnywhere)
	bool  bWantsEmoji = false;    

	UPROPERTY(EditAnywhere)
	bool  bAllowClear = false;                                             

};

USTRUCT(BlueprintType)
struct FApplyWrapVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FName> ComponentNameAllowList;   

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	int WrapSectionMask;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	TMap<FName, int> CustomSectionMaskByMeshName;      

	UPROPERTY(EditAnywhere)
		TSet<TSoftObjectPtr<USkeletalMesh>> AllowedMeshes;

	UPROPERTY(EditAnywhere)
	 FString DefaultSelectedItem;                                      

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	EItemWrapMaterialType WrapMaterialType;                                         

};

USTRUCT(BlueprintType)
struct FApplyWrapVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FApplyWrapVariant                           InnerDef;                                                

	UPROPERTY(EditAnywhere)
	 FCosmeticMetaTagContainer                   MetaTags;                                               

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer FilterOutItemsWithTags;                                  

	UPROPERTY(EditAnywhere)
	bool bAllowClear = false;                                            
};

USTRUCT(BlueprintType)
struct FDynamicVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
};

USTRUCT(BlueprintType)
struct FCosmeticMetaTagCondition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	ECosmeticMetaTagRequirementCategory                ItemCategory;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAthenaCosmeticItemDefinition> SpecificItem;                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.CosmeticMetaTagCondition.SpecificItem

	UPROPERTY(EditAnywhere)
	 FGameplayTagQuery                           MetaTagQuery;                                             // 0x0030(0x0048) (Edit)

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer                       RequiredMetaTags;                                         // 0x0078(0x0020) (Edit, EditConst)

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer                       ExcludedMetaTags;                                         // 0x0098(0x0020) (Edit, EditConst)
};

USTRUCT(BlueprintType)
struct FTagDrivenVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FEmoteMontageSwap>                   MontageSwaps;                                            

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer                       RequiredMetaTags;                                        

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer                       ExcludedMetaTags;                                         

	UPROPERTY(EditAnywhere)
	TArray<FCosmeticMetaTagCondition>           RequiredConditions;                                       

	UPROPERTY(EditAnywhere)
	TArray<FCosmeticMetaTagCondition>           ExcludedConditions;
};

USTRUCT(BlueprintType)
struct FGameplayTagVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FCosmeticMetaTagContainer                   MetaTags;
};

USTRUCT(BlueprintType)
struct FParticleVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialParamterDef> VariantMaterialParams;

	UPROPERTY(EditAnywhere)
		TArray<FVariantParticleSystemInitializerData> InitalParticelSystemData;

	UPROPERTY(EditAnywhere)
		TArray<FParticleVariant> VariantParticles;

	UPROPERTY(EditAnywhere)
		TArray<FParticleParamterVariant> VariantParticleParams;

	UPROPERTY(EditAnywhere)
		TArray<FSoundVariant> VariantSounds;

	UPROPERTY(EditAnywhere)
		FCosmeticMetaTagContainer                   MetaTags;
};

USTRUCT(BlueprintType)
struct FSoundEffectVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray< TSoftObjectPtr<USoundBase>> SoundsToModify;                                     //Idk if right property

	UPROPERTY(EditAnywhere)
	TArray<FName>  ComponentsToApplyTo;                                      // 0x0010(0x0010) (Edit, ZeroConstructor)

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundEffectSourcePresetChain> EffectChain;
};

USTRUCT(BlueprintType)
struct FSoundEffectVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FSoundEffectVariant> SoundEffects;
};

USTRUCT(BlueprintType)
struct FMeshVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<FMeshVariant> VariantMeshes;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialParamterDef> VariantMaterialParams;

	UPROPERTY(EditAnywhere)
		TArray<FVariantParticleSystemInitializerData> InitalParticelSystemData;

	UPROPERTY(EditAnywhere)
		TArray<FParticleVariant> VariantParticles;

	UPROPERTY(EditAnywhere)
		TArray<FParticleParamterVariant> VariantParticleParams;

	UPROPERTY(EditAnywhere)
		TArray<FSocketTransformVariant> SocketTransforms;

	UPROPERTY(EditAnywhere)
		TArray<FSoundVariant> VariantSounds;

	UPROPERTY(EditAnywhere)
		TArray<FFoleySoundVariant> VariantFoley;

	UPROPERTY(EditAnywhere)
		TArray<FScriptedActionVariant> VariantActions;

	UPROPERTY(EditAnywhere)
		FCosmeticMetaTagContainer MetaTags;
};

USTRUCT(BlueprintType)
struct FRichColorVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	struct FLinearColor                                DefaultStartingColor;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UCustomDynamicColorSwatch> ColorSwatchForChoices;

	UPROPERTY(EditAnywhere)
	bool bVariantPickerShouldShowHSV = false;                              // 0x0038(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UFXSystemAsset>> ParticlesToAlter;

	UPROPERTY(EditAnywhere)
	 FName                                       ColorParamName;                                          
};

USTRUCT(BlueprintType)
struct FRichColorVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FCosmeticMetaTagContainer MetaTags;                                             

	UPROPERTY(EditAnywhere)
	 FRichColorVariant RichColorVar;
};