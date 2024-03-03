#include "KairosHeroBase.h"
#include "Components/SceneCaptureComponent2D.h"

bool AKairosHeroBase::EndCapture() {
    return false;
}

bool AKairosHeroBase::BeginCapture(FKairosAnimationFramingInfo FramingInfo, FKairosCaptureParams CaptureParams) {
    return false;
}

AKairosHeroBase::AKairosHeroBase() {
    this->bIsBeingCaptured = false;
    this->SceneCaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->CurrentAnimationState = EKairosHeroAnimationState::Unknown;
    this->SkeletonType = EKairosHeroSkeletonType::Unknown;
    this->CapturePawn = NULL;
}

