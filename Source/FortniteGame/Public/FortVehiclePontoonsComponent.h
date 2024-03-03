#pragma once
#include "CoreMinimal.h"
#include "BuoyancyComponent.h"
#include "VehicleEffectsPontoonParamSet.h"
#include "FortVehiclePontoonsComponent.generated.h"

class AFortAthenaVehicle;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortVehiclePontoonsComponent : public UBuoyancyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleEffectsPontoonParamSet> WaterEffectsPontoonParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PontoonRadius, meta=(AllowPrivateAccess=true))
    TArray<float> OverridePontoonRadiuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PushForcePontoons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LeftTurnPontoons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RightTurnPontoons;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* OwnerVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterLineStartPontoonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterLineEndPontoonIndex;
    
public:
    UFortVehiclePontoonsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PontoonRadius(const TArray<float>& PrevPontoonRadiuses);
    
};

