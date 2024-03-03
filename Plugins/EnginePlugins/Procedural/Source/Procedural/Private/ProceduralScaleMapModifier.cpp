#include "ProceduralScaleMapModifier.h"

void UProceduralScaleMapModifier::SetRemapScaleMin(float InValue) {
}

void UProceduralScaleMapModifier::SetRemapScaleMax(float InValue) {
}

float UProceduralScaleMapModifier::GetRemapScaleMin() const {
    return 0.0f;
}

float UProceduralScaleMapModifier::GetRemapScaleMax() const {
    return 0.0f;
}

UProceduralScaleMapModifier::UProceduralScaleMapModifier() {
    this->bRemapScale = false;
    this->Map = NULL;
}

