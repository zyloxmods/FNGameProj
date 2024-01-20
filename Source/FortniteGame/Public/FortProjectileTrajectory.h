#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortProjectileTrajectory.generated.h"

UCLASS(Blueprintable)
class AFortProjectileTrajectory : public AActor {
    GENERATED_BODY()
public:
    AFortProjectileTrajectory();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTrajectoryFromNative(const TArray<FVector>& SplinePoints, const TArray<FVector>& SplineTangents);
    
};

