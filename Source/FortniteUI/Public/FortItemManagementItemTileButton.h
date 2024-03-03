#pragma once
#include "CoreMinimal.h"
#include "HomebaseSquadSlotId.h"
#include "EFortItemManagementMode.h"
#include "FortItemTileButton.h"
#include "FortItemManagementItemTileButton.generated.h"

class UFortAccountItem;
class UFortInventoryContext;
class UFortItemManagementScreen;
class UMenuAnchor;
class UOverlay;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementItemTileButton : public UFortItemTileButton {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItemManagementScreen> HostItemManagementScreen;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTheItemToDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTheItemToCompareDetailsWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasAnItemMarkedForMulching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MulchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* NotCraftableOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCollectionBookIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowRefundIndicator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInventoryContext* InventoryContext;
    
public:
    UFortItemManagementItemTileButton();
private:
    UFUNCTION(BlueprintCallable)
    void OnSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShowRefundIndicatorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShowCollectionBookIndicatorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemMulchStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHasItemToDetailChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleHasItemToCompareDetailsWithChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEquipSlotChanged(int32 EquipSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemManagementModeSetBP();
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* GetPopupMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemManagementMode GetItemManagementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHomebaseSquadSlotId GetHomebaseSquadSlotForItem() const;
    
};

