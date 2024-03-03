#pragma once
#include "CoreMinimal.h"
#include "FortOctopusVehicleConfigs.h"
#include "FortSpaghettiVehicleConfigs.generated.h"

UCLASS(Blueprintable)
class UFortSpaghettiVehicleConfigs : public UFortOctopusVehicleConfigs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnusedProp;
    
    UFortSpaghettiVehicleConfigs();
};

