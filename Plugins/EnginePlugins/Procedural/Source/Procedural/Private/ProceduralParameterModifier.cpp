#include "ProceduralParameterModifier.h"

float UProceduralParameterModifier::GetContribution() const {
    return 0.0f;
}

UProceduralParameterModifier::UProceduralParameterModifier() {
    this->bEnabled = true;
    this->Contribution = 1;
    this->BlendMode = EProceduralParameterModifierBlendMode::Min;
}

