#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "FortItemPickerBase.h"
#include "FortOutpostStorageItemPicker.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortOutpostStorageItemPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    UFortOutpostStorageItemPicker();
protected:
    UFUNCTION(BlueprintCallable)
    void UseFilters(TArray<EFortItemType> ItemTypes);
    
    UFUNCTION(BlueprintCallable)
    void UseFilter(EFortItemType ItemType);
    
};

