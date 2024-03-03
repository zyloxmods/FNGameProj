#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "BuoyancyData.h"
#include "OnPontoonEnteredWaterDelegate.h"
#include "OnPontoonExitedWaterDelegate.h"
#include "SphericalPontoon.h"
#include "BuoyancyComponent.generated.h"

class AWaterBody;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class WATER_API UBuoyancyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSphericalPontoon> Pontoons;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPontoonEnteredWater OnEnteredWaterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPontoonExitedWater OnExitedWaterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuoyancyData BuoyancyData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWaterBody*> CurrentWaterBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SimulatingComponent;
    
public:
    UBuoyancyComponent();
    UFUNCTION(BlueprintCallable)
    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    
    UFUNCTION(BlueprintCallable)
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWaterBody() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity);
    
};

