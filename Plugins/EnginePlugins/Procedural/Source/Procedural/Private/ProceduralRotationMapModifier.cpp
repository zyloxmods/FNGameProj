#include "ProceduralRotationMapModifier.h"

void UProceduralRotationMapModifier::SetYawMin(float InValue) {
}

void UProceduralRotationMapModifier::SetYawMax(float InValue) {
}

void UProceduralRotationMapModifier::SetRollMin(float InValue) {
}

void UProceduralRotationMapModifier::SetRollMax(float InValue) {
}

void UProceduralRotationMapModifier::SetPitchMin(float InValue) {
}

void UProceduralRotationMapModifier::SetPitchMax(float InValue) {
}

float UProceduralRotationMapModifier::GetYawMin() const {
    return 0.0f;
}

float UProceduralRotationMapModifier::GetYawMax() const {
    return 0.0f;
}

float UProceduralRotationMapModifier::GetRollMin() const {
    return 0.0f;
}

float UProceduralRotationMapModifier::GetRollMax() const {
    return 0.0f;
}

float UProceduralRotationMapModifier::GetPitchMin() const {
    return 0.0f;
}

float UProceduralRotationMapModifier::GetPitchMax() const {
    return 0.0f;
}

UProceduralRotationMapModifier::UProceduralRotationMapModifier() {
    this->Map = NULL;
    this->RotationFormat = EProceduralRotationFormat::VectorXAxis;
}

