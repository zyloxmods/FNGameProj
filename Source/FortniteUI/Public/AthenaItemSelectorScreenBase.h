#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "McpVariantChannelInfo.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "FortTabButtonLabelInfo.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemSelectorScreenBase.generated.h"

class UAthenaCosmeticItemDefinition;
class UAthenaCustomizationPicker;
class UCommonButton;
class UFortItem;
class UFortItemBaseWidget;
class UFortVariantPicker;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemSelectorScreenBase : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> TabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaCustomizationCategory, FFortTabButtonLabelInfo> ItemCategoryButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo VariantButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ConfirmSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_EditStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ConfirmStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCustomizationPicker* Picker_ItemSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* Item_HeaderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* CurrentPreviewItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CurrentPreviewItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CurrentPreviewVariantChannels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPicker* Picker_VariantSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory CustomizeCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubslotIndex;
    
public:
    UAthenaItemSelectorScreenBase();
    UFUNCTION(BlueprintCallable)
    void StartItemCustomization(EAthenaCustomizationCategory InCategory, int32 InSubslotIndex, const FText& CategoryDisplayName, const FText& ItemDisplayTypeName);
    
    UFUNCTION(BlueprintCallable)
    void SaveAndExit_ApplyToAllSlots();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveAndExit(bool bApplyToAllSlots);
    
    UFUNCTION(BlueprintCallable)
    void OnVariantSelectionChanged(const FMcpVariantChannelInfo& InVariant);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabSelectionChanged(bool bShowingVariants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSavingItemStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemSelectionCommited(UFortItem* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSelectedChanged(UFortItem* SelectedItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinsihedItemSetup(const FText& CategoryDisplayName, const FText& ItemDisplayTypeName, EAthenaCustomizationCategory SelectedCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinsihedItemSave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentItemChanged(UFortItem* SelectedItem);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedTabChanged(FName SelectedTabID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetCurrentItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitEditStyle();
    
    UFUNCTION(BlueprintCallable)
    void EnterEditStyle();
    
};

