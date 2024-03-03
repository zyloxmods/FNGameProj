#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortAIFunctionLibrary.generated.h"

class AActor;
class ABuildingActor;
class UAthenaAISpawner;
class UObject;

UCLASS(Blueprintable)
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAIFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetHearingRange(AActor* AIAgent, float Range);
    
    UFUNCTION(BlueprintCallable)
    static void RequestNavUpdateForBuilding(ABuildingActor* BuildingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNoiseEventAtLocation(AActor* NoiseMaker, const float MaxRange, const FVector& NoiseLocation, const FName NoiseTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeNoiseEvent(AActor* NoiseMaker, const float MaxRange, const FName NoiseTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAthenaAISpawner* GetAISpawner(UObject* WorldContextObject);
    
};

