#pragma once
#include "CoreMinimal.h"
#include "RuntimeBoostInfo.h"
#include "RuntimeFuelInfo.h"
#include "RuntimeGearInfo.h"
#include "RuntimeSpringsInfo.h"
#include "VehicleRuntimeModifiers.generated.h"

USTRUCT(BlueprintType)
struct FVehicleRuntimeModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRuntimeBoostInfo BoostInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRuntimeFuelInfo FuelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRuntimeSpringsInfo SpringsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInclineAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTiltAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeGearInfo> GearInfos;
    
    VALETRUNTIME_API FVehicleRuntimeModifiers();
};

