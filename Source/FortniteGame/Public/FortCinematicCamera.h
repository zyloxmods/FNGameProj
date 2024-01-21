#pragma once
#include "CoreMinimal.h"
#include "FortCameraMode.h"
#include "FortCinematicCamera.generated.h"

class AFortPlayerControllerSpectating;

UCLASS(Blueprintable)
class UFortCinematicCamera : public UFortCameraMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerSpectating* SpectatorPC;
    
public:
    UFortCinematicCamera();
};

