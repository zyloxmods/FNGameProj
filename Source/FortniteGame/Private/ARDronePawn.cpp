#include "ARDronePawn.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "ARScreenCaptureComponent.h"

void AARDronePawn::StopScaling() {
}

void AARDronePawn::ScaleOut() {
}

void AARDronePawn::ScaleIn() {
}

AARDronePawn::AARDronePawn() {
    ARRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ARRoot"));
    WebcamRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WebcamRoot"));
    WebcamRotRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WebcamRotRoot"));
    ScreenRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    MotionBase = CreateDefaultSubobject<USceneComponent>(TEXT("MotionBase0"));
    MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
    POVCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("POVCaptureComponent"));
    ScreenCaptureComponent = CreateDefaultSubobject<UARScreenCaptureComponent>(TEXT("ScreenCaptureComponent"));
    ARCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ARCapture"));
    MediaPlayer = NULL;
    MediaPlayerVideoFormatIndex = 0;
    WorldToMetersMultiplier = 1;
    ARPostProcessMaterial = NULL;
    ARPostProcessMID = NULL;
}

