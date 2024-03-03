#pragma once
#include "CoreMinimal.h"
#include "CommonListView.h"
#include "EItemListViewDisplayType.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortItemFilterDefinition.h"
#include "FortItemListViewConfig.h"
#include "FortItemListViewInterface.h"
#include "FortItemSorterDefinition.h"
#include "FortItemListView.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;

UCLASS(Blueprintable)
class UFortItemListView : public UCommonListView, public IFortItemListViewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowNullItemListEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticallyLoadItemDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemListViewDisplayType DisplayType;
    /*
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUpdated OnInventoryUpdatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUpdated OnLoadItemsBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUpdated OnLoadItemsEnd;
    */
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortItem>> CustomItemList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortItem>> ItemsForListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortItemListView();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ShowNullItemListEntry() override PURE_VIRTUAL(ShowNullItemListEntry,);
    
    UFUNCTION(BlueprintCallable)
    void SetSorter(const FFortItemSorterDefinition& Sorter) override PURE_VIRTUAL(SetSorter,);
    
    UFUNCTION(BlueprintCallable)
    void SetItemViewContext(TScriptInterface<IFortItemViewContextInterface> NewItemViewContext) override PURE_VIRTUAL(SetItemViewContext,);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterAndSorter(const FFortItemFilterDefinition& Filter, const FFortItemSorterDefinition& Sorter) override PURE_VIRTUAL(SetFilterAndSorter,);
    
    UFUNCTION(BlueprintCallable)
    void SetFilter(const FFortItemFilterDefinition& Filter) override PURE_VIRTUAL(SetFilter,);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomItemList(const TArray<UFortItem*>& ItemList) override PURE_VIRTUAL(SetCustomItemList,);
    
    UFUNCTION(BlueprintCallable)
    void SetConfig(const FFortItemListViewConfig& Config) override PURE_VIRTUAL(SetConfig,);
    
    UFUNCTION(BlueprintCallable)
    void RefreshSort() override PURE_VIRTUAL(RefreshSort,);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFilterAndSort() override PURE_VIRTUAL(RefreshFilterAndSort,);
    
    UFUNCTION(BlueprintCallable)
    void HideNullItemListEntry() override PURE_VIRTUAL(HideNullItemListEntry,);
    
    UFUNCTION()
    void HandleItemRefundCompleted(const bool bWasSuccessful, const FString& OriginalItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemQuantities) override PURE_VIRTUAL(HandleItemRefundCompleted,);
    
    UFUNCTION()
    void HandleItemRefundBegun(const FString& OriginalItemInstanceId) override PURE_VIRTUAL(HandleItemRefundBegun,);
    
    UFUNCTION()
    void HandleItemRarityUpgradeCompleted(const bool bWasSuccessful, const FString& OriginalItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemQuantities) override PURE_VIRTUAL(HandleItemRarityUpgradeCompleted,);
    
    UFUNCTION()
    void HandleItemRarityUpgradeBegun(const FString& OriginalItemInstanceId) override PURE_VIRTUAL(HandleItemRarityUpgradeBegun,);
    
    UFUNCTION()
    void HandleItemEvolutionCompleted(const bool bWasSuccessful, const FString& OriginalItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemQuantities) override PURE_VIRTUAL(HandleItemEvolutionCompleted,);
    
    UFUNCTION()
    void HandleItemEvolutionBegun(const FString& OriginalItemInstanceId) override PURE_VIRTUAL(HandleItemEvolutionBegun,);
    
    UFUNCTION(BlueprintCallable)
    FFortItemSorterDefinition GetSorter() const override PURE_VIRTUAL(GetSorter, return FFortItemSorterDefinition{};);
    
    UFUNCTION(BlueprintCallable)
    FFortItemFilterDefinition GetFilter() const override PURE_VIRTUAL(GetFilter, return FFortItemFilterDefinition{};);
    
    UFUNCTION(BlueprintCallable)
    FFortItemListViewConfig GetConfig() const override PURE_VIRTUAL(GetConfig, return FFortItemListViewConfig{};);
    
    UFUNCTION(BlueprintCallable)
    bool ContainsItem(const UFortItem* Item) const override PURE_VIRTUAL(ContainsItem, return false;);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomItemList() override PURE_VIRTUAL(ClearCustomItemList,);
    
    UFUNCTION(BlueprintCallable)
    void CenterSelectedItemListEntryWidget() override PURE_VIRTUAL(CenterSelectedItemListEntryWidget,);
    
};

