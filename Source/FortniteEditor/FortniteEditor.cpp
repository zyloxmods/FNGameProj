// Fill out your copyright notice in the Description page of Project Settings.

#include "FortniteEditor.h"
#include "Modules/ModuleManager.h"
#include "FortItemDefinitionThumbnailRenderer.h"
#include "BuildingTextureDataThumbnailRenderer.h"
#include "FortniteGame/Public/FortItemDefinition.h"
#include "ThumbnailRendering/ThumbnailManager.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "BuildingTextureData.h"
#include "ContentBrowserModule.h"
#include "CustomCharacterPart.h"
#include "Public/CustomCharacterPartThumbnailRenderer.h"
#include "FortAssetTypeActions_FortItemDefinition.cpp"
#include "FortAssetTypeActions_FortConversation.cpp"
#include "FortAssetTypeActions_FortPlaysetItemDefinition.cpp"
#include "GameplayTagsManager.h"
#include "IAssetTypeActions.h"


IMPLEMENT_MODULE(FFortniteEditor, FortniteEditor);

DEFINE_LOG_CATEGORY(LogFortEditor)

#define LOCTEXT_NAMESPACE "LogFortEditor"

void FFortniteEditor::StartupModule()
{
	UE_LOG(LogFortEditor, Warning, TEXT("FortniteEditor was initialized."));
	{
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		
		TArray<TSharedPtr<IAssetTypeActions>> AssetTypeActionsArray;
		AssetTypeActionsArray.Add(MakeShareable(new FFortAssetTypeActions_FortItemDefinition()));
		AssetTypeActionsArray.Add(MakeShareable(new FFortAssetTypeActions_FortConversation()));
		AssetTypeActionsArray.Add(MakeShareable(new FFortAssetTypeActions_FortPlaysetItemDefinition()));
		for (const auto& AssetTypeActions : AssetTypeActionsArray)
		{
			AssetTools.RegisterAssetTypeActions(AssetTypeActions.ToSharedRef());
		}
	}
	UThumbnailManager::Get().UnregisterCustomRenderer(UFortItemDefinition::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UFortItemDefinition::StaticClass(), UFortItemDefinitionThumbnailRenderer::StaticClass());

	UThumbnailManager::Get().UnregisterCustomRenderer(UCustomCharacterPart::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UCustomCharacterPart::StaticClass(), UCustomCharacterPartThumbnailRenderer::StaticClass());

	UThumbnailManager::Get().UnregisterCustomRenderer(UBuildingTextureData::StaticClass());
	UThumbnailManager::Get().RegisterCustomRenderer(UBuildingTextureData::StaticClass(), UBuildingTextureDataThumbnailRenderer::StaticClass());
}
#undef LOCTEXT_NAMESPACE
