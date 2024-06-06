#include "CustomCharacterPartModifier_SlurpLegendsBody.h"

void ACustomCharacterPartModifier_SlurpLegendsBody::SetComponentPointers(UParticleSystemComponent* xFormBurst, UNiagaraComponent* DripLoop) {
}

float ACustomCharacterPartModifier_SlurpLegendsBody::GetCurrentShieldPercentage() const {
    return 0.0f;
}

ACustomCharacterPartModifier_SlurpLegendsBody::ACustomCharacterPartModifier_SlurpLegendsBody() {
    TransformBurst = NULL;
    LoopingDrip = NULL;
    InterpolationRate = 1;
    ShieldOverride = 1;
    bUseShieldOverride = false;
    AssociatedPS = NULL;
    AssociatedAnimInstance = NULL;
    BodyMID = NULL;
}

