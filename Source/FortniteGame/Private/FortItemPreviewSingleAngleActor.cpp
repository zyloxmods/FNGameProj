#include "FortItemPreviewSingleAngleActor.h"
#include "Camera/CameraComponent.h"

AFortItemPreviewSingleAngleActor::AFortItemPreviewSingleAngleActor() {
    this->ZoomedOutCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedOutCameraComponent"));
    this->ZoomedInCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomedInCameraComponent"));
}

