#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInventoryContentSortType.h"
#include "FortInventorySortFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UFortInventorySortFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortInventorySortFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCriterionDisplayNameOfSortType(EInventoryContentSortType SortType);
    
};

