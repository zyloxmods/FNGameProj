#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortQuickBars.h"
#include "EInventoryContentSortType.h"
#include "EFortItemCardSize.h"
#include "FortItemManagementInventoryFilterTabLabelInfo.h"
#include "Templates/SubclassOf.h"
#include "FortItemManagementInventoryPanel.generated.h"

class UCommonButton;
class UCommonButtonStyle;
class UCommonLoadGuard;
class UCommonTextBlock;
class UFortInventoryContext;
class UFortItem;
class UFortItemDefinition;
class UFortItemManagementScreen;
class UFortItemTileView;
class UFortTabListWidgetBase;
class UObject;
class UPanelWidget;
class UUserWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementInventoryPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentFilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryContentSortType CurrentSortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> FilterTabButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> FilterTabButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* FilterTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* TileViewLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* TileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* CraftingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* CraftingTileViewLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* CraftingTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* StoragePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* StorageTileViewLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* StorageTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* MulchRestrictionReasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize SmallTileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize LargeTileSize;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemManagementScreen> HostItemManagementScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDragItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WidgetToCenter;
    
public:
    UFortItemManagementInventoryPanel();
    UFUNCTION(BlueprintCallable)
    void UpdateSchematicTiles();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTileSize();
    
    UFUNCTION(BlueprintCallable)
    void TogglePrioritizeFavorites();
    
    UFUNCTION(BlueprintCallable)
    void SwitchPanelFocus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSortType(EInventoryContentSortType SortType);
    
    UFUNCTION(BlueprintCallable)
    void SetFilter(const FName FilterName);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestFocusEquipSlots();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCraftingSort();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMulchRestrictionTextShown(bool bShown);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAllItemsAsSeen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchPanelAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedItem(const UFortItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedStorageSlots() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetOfItemsToMulchChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemBeginDrag(UObject* Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryUpdatedEvent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleFocusEquipSlotsBP();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleFilterTabSelected(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterTabButtonCreated(FName TabNameID, UCommonButton* TabButton);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentSortTypeSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemManagementModeSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentFrontendInventoryFilterSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentFilterSetBP();
    
    UFUNCTION(BlueprintCallable)
    void HandleCustomInventoryFilterChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleCraftItemStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetShouldPrioritizeFavorites();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQualifiedFilterDisplayName() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CycleSortType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDragItems() const;
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSelection();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddItemStackToMulch(UFortItem* Item, int32 Count);
    
};

