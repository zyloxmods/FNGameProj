#pragma once
#include "CoreMinimal.h"
#include "EFortFrontendInventoryFilter.h"
#include "EFortItemTier.h"
#include "EFortItemManagementMode.h"
#include "FortActivatablePanel.h"
#include "FortItemManagementMulchPanel.h"
#include "OnItemViewRefreshedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortItemManagementScreen.generated.h"

class UFortAccountItem;
class UFortConsumableAccountItem;
class UFortInventoryContext;
class UFortItem;
class UFortItemManagementCustomFilterModalWidget;
class UFortItemManagementInventoryPanel;
class UFortItemManagementModeDetailsPanel;
class UFortMulchConfirmationModalWidget;
class UFortSchematicItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementScreen : public UFortActivatablePanel, public IFortItemManagementMulchPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemViewRefreshed OnItemViewRefreshed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemManagementMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortFrontendInventoryFilter FrontendInventoryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnlyModeWIFE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConsumeItemRequestInProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementInventoryPanel* InventoryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemManagementModeDetailsPanel* ModeDetailsPanel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemManagementCustomFilterModalWidget> CustomFilterModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMulchConfirmationModalWidget* MulchConfirmationModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortItemManagementCustomFilterModalWidget* CustomFilterModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
public:
    UFortItemManagementScreen();
    UFUNCTION(BlueprintCallable)
    void TransferItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowRefundIndicator();
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowCollectionBookIndicator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWarningReadOnlyWIFE(bool Force);
    
    UFUNCTION(BlueprintCallable)
    void ShowMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable)
    void ShowCustomFilterModal();
    
    UFUNCTION(BlueprintCallable)
    void SetFrontendInventoryFilter(EFortFrontendInventoryFilter NewFrontendInventoryFilter);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeItemRequestInProgress(bool InProgress);
    
    UFUNCTION(BlueprintCallable)
    void RequestPopupMenuForSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void OpenCraftingOptions(UFortSchematicItem* SchematicItem);
    
    UFUNCTION(BlueprintCallable)
    void OpenAutoMulchOptions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyPanelDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAllItemsAsSeen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenWIFE() const;
    
    UFUNCTION(BlueprintCallable)
    void InspectItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void HideMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable)
    void HideCustomFilterModal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemBeenSeen(UFortAccountItem* AccountItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefaultItemsToMulch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTransferItemBP(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOpenCraftingOptionsBP(UFortSchematicItem* SchematicItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOpenAutoMulchOptionsBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMulchQuantitySelection(UFortItem* Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInspectItemBP(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEquipItemBP(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDropItemBP(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemManagementModeSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCraftItemBP(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCraftAndSlotItemBP(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleConsumeItemBP(UFortConsumableAccountItem* ConsumableItem);
    
    UFUNCTION(BlueprintCallable)
    bool GuardActionForReadOnlyWIFE();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShowRefundIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShowCollectionBookIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemToDetail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemToCompareDetailsWith() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void EnterMulchModeForAutoMulch();
    
    UFUNCTION(BlueprintCallable)
    void EnterMulchMode(UFortItem* ItemToMulch);
    
    UFUNCTION(BlueprintCallable)
    void EnterDetailsMode(UFortItem* NewItemToDetail);
    
    UFUNCTION(BlueprintCallable)
    void EnterComparisonMode(UFortItem* ItemToCompareDetailsWith);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void CycleSortType();
    
    UFUNCTION(BlueprintCallable)
    void CraftItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable)
    void CraftAndSlotItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeItem(UFortConsumableAccountItem* ConsumableItem);
    
    UFUNCTION(BlueprintCallable)
    bool CanRequestPopupMenuForSelectedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipItem(UFortItem* Item) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelInventoryPanelTileViewRefresh();
    
    
    // Fix for true pure virtual functions not being implemented
};

