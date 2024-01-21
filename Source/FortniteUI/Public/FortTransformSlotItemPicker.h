#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryFilter.h"
#include "EFortItemType.h"
#include "FortItemPickerBase.h"
#include "FortTransformSlotItemPicker.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTransformSlotItemPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    UFortTransformSlotItemPicker();
    UFUNCTION(BlueprintCallable)
    void RebuildSlottableItems(const TArray<EFortInventoryFilter>& ItemFilters, EFortItemType ItemType, const TArray<UFortItem*>& ItemsToIgnore);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryUpdated();
    
};

