#pragma once
#include "CoreMinimal.h"
#include "FlightControlSurfaces.generated.h"

USTRUCT(BlueprintType)
struct FFlightControlSurfaces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RudderAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AileronAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElevatorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlapAngle;
    
    FORTNITEGAME_API FFlightControlSurfaces();
};

