#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortItemEntry.h"
#include "EFortCreativeItemType.h"
#include "EFortItemCardSize.h"
#include "OnItemCountChangedDelegateDelegate.h"
#include "OnSelectionChangedDelegateDelegate.h"
#include "FortCreativeItemListTabPanel.generated.h"

class UAthenaCreativeItemTileView;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeItemListTabPanel : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionChangedDelegate OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemCountChangedDelegate OnSourceItemCountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCreativeItemTileView* CreativeTileView_ItemOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemEntry CurrentItemEntry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemCountChangedDelegate OnItemCountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TabLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> SourceItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LastFilters;
    
public:
    UFortCreativeItemListTabPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectTab();
    
    UFUNCTION(BlueprintCallable)
    void RestoreLastSelection();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemEquipped(const FFortItemEntry& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedItemIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCreativeItemType GetItemType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCollapseBorderPadFlagForCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemCardSize GetCardSizeForCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusCurrentSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearFilteredItems();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllItems();
    
    UFUNCTION(BlueprintCallable)
    void AddItemToSource(UPARAM(Ref) FFortItemEntry& ItemToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UPARAM(Ref) FFortItemEntry& ItemToAdd);
    
};

