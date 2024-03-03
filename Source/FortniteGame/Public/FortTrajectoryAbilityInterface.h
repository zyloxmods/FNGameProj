#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "FortTrajectoryAbilityInterface.generated.h"

class AFortProjectileTrajectory;

UINTERFACE(Blueprintable)
class UFortTrajectoryAbilityInterface : public UInterface {
    GENERATED_BODY()
};

class IFortTrajectoryAbilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrajectory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOnlyShowTrajectoryOnUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitTrajectoryVariables();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetProjectileTrajectoryPoints(TArray<FVector>& OutSplinePoints, TArray<FVector>& OutSplineTangents, FHitResult& OutHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<AFortProjectileTrajectory> GetProjectileTrajectoryActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CleanupTrajectoryIndicatorOnUnequip();
    
};

