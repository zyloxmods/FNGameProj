#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAthenaCustomizationCategory.h"
#include "McpVariantChannelInfo.h"
#include "AthenaCustomizationParams.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortItemPreviewScreen.h"
#include "FortTabButtonLabelInfo.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemSelectorScreenBase.generated.h"

class UAthenaCosmeticItemDefinition;
class UAthenaCosmeticUnlockingInfo;
class UAthenaCustomizationPicker;
class UCommonButton;
class UFortItem;
class UFortItemBaseWidget;
class UFortVariantPicker;
class UMaterialInstance;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaItemSelectorScreenBase : public UFortItemPreviewScreen, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> TabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAthenaCustomizationCategory, FFortTabButtonLabelInfo> ItemCategoryButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTabButtonLabelInfo VariantButtonLabelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ApplyToAllInputActionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleFavoriteActionRow;
    
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVariantZoomUsesSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* CurrentPreviewItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CurrentPreviewItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CurrentPreviewVariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CachedVariantChannels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVariantPicker* Picker_VariantSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticUnlockingInfo* UnlockingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory CustomizeCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubslotIndex;
    
public:
    UAthenaItemSelectorScreenBase();
    UFUNCTION(BlueprintCallable)
    void StartItemCustomization(const FAthenaCustomizationParams& Params);
    
    UFUNCTION(BlueprintCallable)
    void SaveAndExit_ApplyToAllSlots();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveAndExit(bool bApplyToAllSlots);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVariantSelectionChangedBP(const FMcpVariantChannelInfo& InVariant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateExclusiveItemCallout(bool bShouldShow, const FText& CalloutText);
    
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
    void OnHideItemInfoHeader(bool bShouldHide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinsihedItemSave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedItemSetup(const FText& CategoryDisplayName, const FText& ItemDisplayTypeName, EAthenaCustomizationCategory SelectedCategory, UMaterialInstance* OverrideSlotImage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentItemChanged(UFortItem* SelectedItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemOwned(const UFortItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void IsInTextSearchChanged(bool bEnteredTextSearch);
    
    UFUNCTION(BlueprintCallable)
    void HandleSearchTextChanged(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void HandleScreenAnalytics(bool bItemChanged);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetCurrentItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitEditStyle();
    
    UFUNCTION(BlueprintCallable)
    void EnterEditStyle();
    
    
    // Fix for true pure virtual functions not being implemented
};

