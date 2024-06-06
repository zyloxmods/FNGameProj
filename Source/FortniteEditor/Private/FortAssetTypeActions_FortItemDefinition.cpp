// Copyright 1998-2017 Epic Games, Inc.
#include "AssetTypeActions_Base.h"
#include "FortItemDefinition.h"
#include "Windows/WindowsPlatformApplicationMisc.h"

/** @ FFortAssetTypeActions_FortItemDefinition implementation */
class FFortAssetTypeActions_FortItemDefinition : public FAssetTypeActions_Base {
public:
    // IAssetTypeActions Implementation
    virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "FortAssetTypeActions_FortItemDefinition", "FortItemDefinition"); }
    virtual FColor GetTypeColor() const { return FColor(65, 102, 44); }
    virtual UClass* GetSupportedClass() const override { return UFortItemDefinition::StaticClass(); }
    virtual uint32 GetCategories() override { return EAssetTypeCategories::Misc; }
    
    // Implement this method to add custom context menu actions
    virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override
    {
        FAssetTypeActions_Base::GetActions(InObjects, MenuBuilder);

        // Add your custom action
        MenuBuilder.AddMenuEntry(
            NSLOCTEXT("AssetTypeActions", "FortAssetTypeActions_FortItemDefinition", "Copy TemplateIds to Clipboard"),
            NSLOCTEXT("AssetTypeActions", "FortAssetTypeActions_FortItemDefinition", "Copy the Template ID of this asset to the clipboard."),
            FSlateIcon(),
            FUIAction(FExecuteAction::CreateLambda([=] { CopyTemplateIdsToClipboard(InObjects); }))
        );
    }
    // Method to copy the Template ID to the clipboard
    void CopyTemplateIdsToClipboard(const TArray<UObject*>& InObjects)
    {
        FString AllTemplateIds;

        for (UObject* Object : InObjects)
        {
            UFortItemDefinition* FortItemDefinition = Cast<UFortItemDefinition>(Object);
            if (FortItemDefinition)
            {
                AllTemplateIds += FortItemDefinition->EditorTemplateId + TEXT("\n");
            }
        }

        if (!AllTemplateIds.IsEmpty())
        {
            FPlatformApplicationMisc::ClipboardCopy(*AllTemplateIds);
        }
    }
};