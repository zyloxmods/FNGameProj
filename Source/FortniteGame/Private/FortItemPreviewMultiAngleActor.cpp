#include "FortItemPreviewMultiAngleActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AFortItemPreviewMultiAngleActor::AFortItemPreviewMultiAngleActor() {
    this->CameraRotationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRotationRootComponent"));
    this->PrimaryCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("PrimaryCameraComponent"));
    this->AngleTransitionDuration = 1;
    this->AngleTransitionCurve = NULL;
    this->ActiveCameraAngle = CreateDefaultSubobject<UCameraComponent>(TEXT("ActiveCameraAngle"));
}

