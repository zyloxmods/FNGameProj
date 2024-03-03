#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortMeshNetworkFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UFortMeshNetworkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortMeshNetworkFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FireEvent_MeshHeartbeat(const UObject* WorldContextObject);
    
};

