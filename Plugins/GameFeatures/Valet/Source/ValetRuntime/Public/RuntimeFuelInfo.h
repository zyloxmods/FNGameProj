#pragma once
#include "CoreMinimal.h"
#include "RuntimeFuelInfo.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeFuelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelPerSecondDriving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelPerSecondBoosting;
    
    VALETRUNTIME_API FRuntimeFuelInfo();
};

