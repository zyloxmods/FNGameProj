#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAthenaCustomizationCategory.h"
#include "AthenaCustomizationParams.h"
#include "FortItemPreviewScreen.h"
#include "Templates/SubclassOf.h"
#include "AthenaCustomizationScreenBase.generated.h"

class UAthenaCosmeticAccountItem;
class UAthenaCustomizationSlotSelectorButton;
class UAthenaItemSelectorScreenBase;
class UAthenaLockerItemInfo;
class UCommonButton;
class UFortActivatablePanel;
class UFortBannerSelectModal;
class UFortBannerSlotButton;
class UFortCosmeticLoadoutCard;
class UFortCosmeticLoadoutSelector;
class UFortItem;
class UFortNameLoadoutPopup;
class UFortProgressModal;
class UPanelWidget;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaCustomizationScreenBase : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomizationSelectionBeingProcessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaCustomizationParams CustomizationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory FirstCustomizationCategory;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryDisplayNames[22];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemTypeDisplayNames[22];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaItemSelectorScreenBase> ItemSelectorScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatablePanel> LoadoutSelectorScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBannerSelectModal> BannerSelectModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNameLoadoutPopup> NameLoadoutPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressModal> ProgressModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortProgressModal* ProgressModalInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaCustomizationSlotSelectorButton* LastHoveredSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OpenNameLoadoutInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAthenaCustomizationCategory> BuiltInEmoteCategoryPriorities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayBuiltInEmotesInEmoteRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BoundAnim_Outro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_Loadouts_GodTileArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Loadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SavePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_RandomPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutSelector* Loadout_Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCosmeticLoadoutCard* LoadoutCard_AppliedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_GearSlotRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCustomizationSlotSelectorButton* Slot_Glider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCustomizationSlotSelectorButton* Slot_Contrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCustomizationSlotSelectorButton* Slot_LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_EmoteSlotRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_WrapSlotRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_AccountSlotRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBannerSlotButton* Banner_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaLockerItemInfo* ItemInfo_Display;
    
public:
    UAthenaCustomizationScreenBase();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowLockerSlot(EAthenaCustomizationCategory CustomizationCategory, int32 SlotIndex, bool bCanShowEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayNextRandomPresetName() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShiftItemsVariantOption(UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCustomizationSelectionBeingProcessed(bool bIsBeingProcessed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshForNewLoadout(const FString& LoadoutName, bool bIsShuffleTile);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerToggledRandomPresets(bool bNowEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntroAppliedPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSavingLoadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginPickingLoadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginPickingCustomizationSlot(UAthenaCustomizationSlotSelectorButton* SlotButton);
    
private:
    UFUNCTION()
    void HandleInventoryUpdated(const TSet<FString>& ItemChangeFlags, int64 ProfileRevision);
    
public:
    UFUNCTION(BlueprintCallable)
    FText GetItemTypeDisplayNames(EAthenaCustomizationCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    UFortItem* GetFavoriteItemForCategory(EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex);
    
    UFUNCTION(BlueprintCallable)
    FText GetCategoryDisplayName(EAthenaCustomizationCategory InCategory);
    
};

