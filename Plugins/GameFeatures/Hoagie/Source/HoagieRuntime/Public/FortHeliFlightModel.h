#pragma once
#include "CoreMinimal.h"
#include "FortHeliFlightModel.generated.h"

class UFortHoagieVehicleConfigs;

USTRUCT(BlueprintType)
struct FFortHeliFlightModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHoagieVehicleConfigs* Configs;
    
public:
    HOAGIERUNTIME_API FFortHeliFlightModel();
};

