#include "NitrogenNavArrow.h"
#include "Components/StaticMeshComponent.h"

void ANitrogenNavArrow::UpdatePulseSpeedForDistance_Implementation() {
}

void ANitrogenNavArrow::UpdatePrimaryColorForDistance_Implementation() {
}

void ANitrogenNavArrow::ThrowArrowToDestination_Implementation() {
}

void ANitrogenNavArrow::RecallArrowToOwner_Implementation() {
}

ANitrogenNavArrow::ANitrogenNavArrow() {
    this->bFollowCamera = true;
    this->bThrowingEnabled = false;
    this->ThrowTranslationCurve = NULL;
    this->ThrowRotationCurve = NULL;
    this->ArrowColorCurve = NULL;
    this->ColorFadeOuterRadius = 1;
    this->ColorFadeInnerRadius = 1;
    this->PulseParameterCurve = NULL;
    this->PulseSpeedCurve = NULL;
    this->PulseAccelOuterRadius = 1;
    this->PulseAccelInnerRadius = 1;
    this->ScaleCurve = NULL;
    this->ArrowComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowSMC"));
    this->ArrowDynamicMaterial = NULL;
}

