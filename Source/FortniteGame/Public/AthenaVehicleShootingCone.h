#pragma once
#include "CoreMinimal.h"
#include "AthenaVehicleShootingCone.generated.h"

USTRUCT(BlueprintType)
struct FAthenaVehicleShootingCone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchConstraint;
    
    FORTNITEGAME_API FAthenaVehicleShootingCone();
};

