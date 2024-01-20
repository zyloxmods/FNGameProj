#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "FortIconCaptureCamera.generated.h"

UCLASS(Abstract, Blueprintable)
class AFortIconCaptureCamera : public ACameraActor {
    GENERATED_BODY()
public:
    AFortIconCaptureCamera();
};

