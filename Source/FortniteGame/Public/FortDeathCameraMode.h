#pragma once
#include "CoreMinimal.h"
#include "FortCameraMode.h"
#include "FortDeathCameraMode.generated.h"

UCLASS(Blueprintable)
class UFortDeathCameraMode : public UFortCameraMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToTrackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackToTargetSpeed;
    
public:
    UFortDeathCameraMode();
};

