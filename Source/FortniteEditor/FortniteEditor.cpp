// Fill out your copyright notice in the Description page of Project Settings.

#include "FortniteEditor.h"
#include "Modules/ModuleManager.h"
#include "FortItemDefinitionThumbnailRenderer.h"
#include "AssetTypeActions_Base.h"
#include "FortniteGame/Public/FortItemDefinition.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "BuildingTextureData.h"
#include "BuildingTextureDataThumbnailRenderer.h"
#include "CustomCharacterPart.h"
#include "Public/CustomCharacterPartThumbnailRenderer.h"
#include "Modules/ModuleManager.h"
#include "SlateStyleRegistry.h"
#include "Private/MakeDesignAsset/FortEditorTool_MakeAssetBase.h"
#include "LevelEditor.h"
#include "EditorStyleSet.h"
#include "MultiBoxBuilder.h"
#include "FortConversation.h"
#include "IAssetTypeActions.h"


IMPLEMENT_GAME_MODULE(FFortniteEditor, FortniteEditor);

DEFINE_LOG_CATEGORY(LogFortEditor)

#define LOCTEXT_NAMESPACE "LogFortEditor"

class FATA_FortItemDefinitionFactory : public FAssetTypeActions_Base {
#if WITH_EDITOR
public:
	FATA_FortItemDefinitionFactory()
	{
	};
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
	virtual FText GetName() const override { return LOCTEXT("FortItemDefinition", "FortItemDefinition"); }
	virtual FColor GetTypeColor() const { return FColor(65, 102, 44); }
	virtual UClass* GetSupportedClass() const override { return UFortItemDefinition::StaticClass(); }
#undef LOCTEXT_NAMESPACE
#endif
};

class FATA_FortConversationFactory : public FAssetTypeActions_Base {
#if WITH_EDITOR
#define LOCTEXT_NAMESPACE "FortConversation"
public:
	FATA_FortConversationFactory()
	{
	};
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
	virtual FText GetName() const override { return LOCTEXT("FortConversation", "FortConversation"); }
	virtual FColor GetTypeColor() const { return FColor(114, 178, 19); }
	virtual UClass* GetSupportedClass() const override { return UFortConversation::StaticClass(); }
#undef LOCTEXT_NAMESPACE
#endif
};

void FFortniteEditor::StartupModule()
{
	UE_LOG(LogFortEditor, Warning, TEXT("FortniteEditor was initialized."));
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		
		TSharedPtr<IAssetTypeActions> Action = MakeShareable(new FATA_FortItemDefinitionFactory());
		TSharedPtr<IAssetTypeActions> ActionConv = MakeShareable(new FATA_FortConversationFactory());
		AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());
		AssetTools.RegisterAssetTypeActions(ActionConv.ToSharedRef());
	}
	UThumbnailManager::Get().UnregisterCustomRenderer(UFortItemDefinition::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UFortItemDefinition::StaticClass(), UFortItemDefinitionThumbnailRenderer::StaticClass());

	UThumbnailManager::Get().UnregisterCustomRenderer(UCustomCharacterPart::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UCustomCharacterPart::StaticClass(), UCustomCharacterPartThumbnailRenderer::StaticClass());

	UThumbnailManager::Get().UnregisterCustomRenderer(UBuildingTextureData::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UBuildingTextureData::StaticClass(), UBuildingTextureDataThumbnailRenderer::StaticClass());

}

#undef LOCTEXT_NAMESPACE
