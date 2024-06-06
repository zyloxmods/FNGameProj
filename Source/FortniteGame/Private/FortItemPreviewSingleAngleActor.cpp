#include "FortItemPreviewSingleAngleActor.h"
#include "Camera/CameraComponent.h"

AFortItemPreviewSingleAngleActor::AFortItemPreviewSingleAngleActor() {
    ZoomedOutCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCameraComponent"));
    ZoomedInCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCameraComponent"));
}

