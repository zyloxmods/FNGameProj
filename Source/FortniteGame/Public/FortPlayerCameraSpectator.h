#pragma once
#include "CoreMinimal.h"
#include "FortPlayerCameraBase.h"
#include "FortPlayerCameraSpectator.generated.h"

class UFortCinematicCamera;

UCLASS(Blueprintable, NonTransient)
class AFortPlayerCameraSpectator : public AFortPlayerCameraBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCinematicCamera* SpectatorCam;
    
public:
    AFortPlayerCameraSpectator();
};

