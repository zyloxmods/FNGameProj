#include "ProceduralRotationNoiseModifier.h"

void UProceduralRotationNoiseModifier::SetRandomYawMin(float InValue) {
}

void UProceduralRotationNoiseModifier::SetRandomYawMax(float InValue) {
}

void UProceduralRotationNoiseModifier::SetRandomRollMin(float InValue) {
}

void UProceduralRotationNoiseModifier::SetRandomRollMax(float InValue) {
}

void UProceduralRotationNoiseModifier::SetRandomPitchMin(float InValue) {
}

void UProceduralRotationNoiseModifier::SetRandomPitchMax(float InValue) {
}

float UProceduralRotationNoiseModifier::GetRandomYawMin() const {
    return 0.0f;
}

float UProceduralRotationNoiseModifier::GetRandomYawMax() const {
    return 0.0f;
}

float UProceduralRotationNoiseModifier::GetRandomRollMin() const {
    return 0.0f;
}

float UProceduralRotationNoiseModifier::GetRandomRollMax() const {
    return 0.0f;
}

float UProceduralRotationNoiseModifier::GetRandomPitchMin() const {
    return 0.0f;
}

float UProceduralRotationNoiseModifier::GetRandomPitchMax() const {
    return 0.0f;
}

UProceduralRotationNoiseModifier::UProceduralRotationNoiseModifier() {
    this->bRandomRoll = false;
    this->bRandomPitch = false;
    this->bRandomYaw = false;
}

