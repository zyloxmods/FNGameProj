// Fill out your copyright notice in the Description page of Project Settings.

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */
#include "FortniteEditor.h"
#include "Modules/ModuleManager.h"
#include "FortniteEditor/Public/ThumbnailRendering/FortItemDefinitionThumbnailRenderer.h" 
#include "FortniteEditor/Public/Factories/FortItemFactory.h"
#include "FortniteGame/Public/Items/FortItemDefinition.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "Modules/ModuleManager.h"
#include "Styling/SlateStyleRegistry.h"

IMPLEMENT_GAME_MODULE(FortniteEditor, FortniteEditor);

DEFINE_LOG_CATEGORY(LogFortEditor)

#define LOCTEXT_NAMESPACE "LogFortEditor"

void FortniteEditor::StartupModule()
{
	UE_LOG(LogFortEditor, Warning, TEXT("FortniteEditor was initialized."));

	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		// add custom category
		EAssetTypeCategories::Type FortressCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Fortress Asset")), FText::FromString("Fortress Asset"));
		// register our custom asset with example category
		TSharedPtr<IAssetTypeActions> Action = MakeShareable(new FATA_FortItemDefinitionFactory(FortressCategory));
		AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());
	}

	UThumbnailManager::Get().UnregisterCustomRenderer(UFortItemDefinition::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UFortItemDefinition::StaticClass(), UFortItemDefinitionThumbnailRenderer::StaticClass());

}

#undef LOCTEXT_NAMESPACE