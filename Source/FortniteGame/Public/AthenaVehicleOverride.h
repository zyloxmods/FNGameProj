#pragma once
#include "CoreMinimal.h"
#include "AthenaVehicleOverride.generated.h"

class AFortAthenaVehicle;

USTRUCT(BlueprintType)
struct FAthenaVehicleOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicle> DefaultVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortAthenaVehicle> OverrideVehicleClass;
    
    FORTNITEGAME_API FAthenaVehicleOverride();
};

