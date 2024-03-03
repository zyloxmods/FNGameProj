#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortProjectileTrajectory.generated.h"

class USplineComponent;
class USplineMeshComponent;

UCLASS(Blueprintable)
class AFortProjectileTrajectory : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SplineMeshComponents;
    
public:
    AFortProjectileTrajectory();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTrajectorySpline(const TArray<FVector>& SplinePoints, const TArray<FVector>& SplineTangents);
    
};

