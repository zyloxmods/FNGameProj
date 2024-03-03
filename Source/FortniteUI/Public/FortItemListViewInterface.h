#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortItemFilterDefinition.h"
#include "FortItemListViewConfig.h"
#include "FortItemSorterDefinition.h"
#include "FortItemListViewInterface.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortItemListViewInterface : public UInterface {
    GENERATED_BODY()
};

class IFortItemListViewInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void ShowNullItemListEntry() PURE_VIRTUAL(ShowNullItemListEntry,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSorter(const FFortItemSorterDefinition& Sorter) PURE_VIRTUAL(SetSorter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetItemViewContext(TScriptInterface<IFortItemViewContextInterface> ItemViewContext) PURE_VIRTUAL(SetItemViewContext,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetFilterAndSorter(const FFortItemFilterDefinition& Filter, const FFortItemSorterDefinition& Sorter) PURE_VIRTUAL(SetFilterAndSorter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetFilter(const FFortItemFilterDefinition& Filter) PURE_VIRTUAL(SetFilter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetCustomItemList(const TArray<UFortItem*>& ItemList) PURE_VIRTUAL(SetCustomItemList,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetConfig(const FFortItemListViewConfig& Config) PURE_VIRTUAL(SetConfig,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RefreshSort() PURE_VIRTUAL(RefreshSort,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RefreshFilterAndSort() PURE_VIRTUAL(RefreshFilterAndSort,);
    
    UFUNCTION(BlueprintCallable)
    virtual void HideNullItemListEntry() PURE_VIRTUAL(HideNullItemListEntry,);
    
    UFUNCTION()
    virtual void HandleItemRefundCompleted(const bool bWasSuccessful, const FString& OriginalItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemQuantities) PURE_VIRTUAL(HandleItemRefundCompleted,);
    
    UFUNCTION()
    virtual void HandleItemRefundBegun(const FString& OriginalItemInstanceId) PURE_VIRTUAL(HandleItemRefundBegun,);
    
    UFUNCTION()
    virtual void HandleItemRarityUpgradeCompleted(const bool bWasSuccessful, const FString& OriginalItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemQuantities) PURE_VIRTUAL(HandleItemRarityUpgradeCompleted,);
    
    UFUNCTION()
    virtual void HandleItemRarityUpgradeBegun(const FString& OriginalItemInstanceId) PURE_VIRTUAL(HandleItemRarityUpgradeBegun,);
    
    UFUNCTION()
    virtual void HandleItemEvolutionCompleted(const bool bWasSuccessful, const FString& OriginalItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemQuantities) PURE_VIRTUAL(HandleItemEvolutionCompleted,);
    
    UFUNCTION()
    virtual void HandleItemEvolutionBegun(const FString& OriginalItemInstanceId) PURE_VIRTUAL(HandleItemEvolutionBegun,);
    
    UFUNCTION(BlueprintCallable)
    virtual FFortItemSorterDefinition GetSorter() const PURE_VIRTUAL(GetSorter, return FFortItemSorterDefinition{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FFortItemFilterDefinition GetFilter() const PURE_VIRTUAL(GetFilter, return FFortItemFilterDefinition{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FFortItemListViewConfig GetConfig() const PURE_VIRTUAL(GetConfig, return FFortItemListViewConfig{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ContainsItem(const UFortItem* Item) const PURE_VIRTUAL(ContainsItem, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ClearCustomItemList() PURE_VIRTUAL(ClearCustomItemList,);
    
    UFUNCTION(BlueprintCallable)
    virtual void CenterSelectedItemListEntryWidget() PURE_VIRTUAL(CenterSelectedItemListEntryWidget,);
    
};

