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
    this->ARRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ARRoot"));
    this->WebcamRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WebcamRoot"));
    this->WebcamRotRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WebcamRotRoot"));
    this->ScreenRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->MotionBase = CreateDefaultSubobject<USceneComponent>(TEXT("MotionBase0"));
    this->MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
    this->POVCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("POVCaptureComponent"));
    this->ScreenCaptureComponent = CreateDefaultSubobject<UARScreenCaptureComponent>(TEXT("ScreenCaptureComponent"));
    this->ARCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ARCapture"));
    this->MediaPlayer = NULL;
    this->MediaPlayerVideoFormatIndex = -1;
    this->WorldToMetersMultiplier = 1.00f;
    this->ARPostProcessMaterial = NULL;
    this->ARPostProcessMID = NULL;
}

