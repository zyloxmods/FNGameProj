#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortFrontendInventoryFilter.h"
#include "FortFrontendInventoryFilterFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UFortFrontendInventoryFilterFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortFrontendInventoryFilterFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ToText(EFortFrontendInventoryFilter FrontendInventoryFilter);
    
};

