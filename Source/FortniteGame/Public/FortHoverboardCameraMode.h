#pragma once
#include "CoreMinimal.h"
#include "FortCameraMode_ThirdPerson.h"
#include "FortHoverboardCameraMode.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UFortHoverboardCameraMode : public UFortCameraMode_ThirdPerson {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VelocityBasedFOVIncreaseCurve;
    
    UFortHoverboardCameraMode();
};

