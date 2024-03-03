#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AthenaMarkerComponentLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UAthenaMarkerComponentLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAthenaMarkerComponentLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DeactivateAllMarkerComponents(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateAllMarkerComponents(UObject* WorldContextObject);
    
};

