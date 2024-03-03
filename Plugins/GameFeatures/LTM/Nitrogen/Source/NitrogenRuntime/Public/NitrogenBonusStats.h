#pragma once
#include "CoreMinimal.h"
#include "NitrogenBonusStat.h"
#include "NitrogenBonusStats.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenBonusStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStat VehicleBumpIntoVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStat VehicleBuildingDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStat VehicleDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStat VehicleAirTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStat VehicleBoostDrivingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStat VehicleOffRoadTime;
    
    NITROGENRUNTIME_API FNitrogenBonusStats();
};

