#include "FortItemPreviewMultiAngleActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AFortItemPreviewMultiAngleActor::AFortItemPreviewMultiAngleActor() {
    CameraRotationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRotationRootComponent"));
    PrimaryCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("PrimaryCameraComponent"));
    AngleTransitionDuration = 1;
    AngleTransitionCurve = NULL;
    ActiveCameraAngle = CreateDefaultSubobject<UCameraComponent>(TEXT("ActiveCameraAngle"));
}

