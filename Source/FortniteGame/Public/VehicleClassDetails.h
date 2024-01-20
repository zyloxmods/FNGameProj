#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "VehicleClassDetails.generated.h"

class AFortAthenaVehicle;

USTRUCT(BlueprintType)
struct FVehicleClassDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicle> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VehicleMinSpawnPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VehicleMaxSpawnPercent;
    
    FORTNITEGAME_API FVehicleClassDetails();
};

