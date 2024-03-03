#include "CustomCharacterPartModifier_SlurpLegendsBody.h"

void ACustomCharacterPartModifier_SlurpLegendsBody::SetComponentPointers(UParticleSystemComponent* xFormBurst, UNiagaraComponent* DripLoop) {
}

float ACustomCharacterPartModifier_SlurpLegendsBody::GetCurrentShieldPercentage() const {
    return 0.0f;
}

ACustomCharacterPartModifier_SlurpLegendsBody::ACustomCharacterPartModifier_SlurpLegendsBody() {
    this->TransformBurst = NULL;
    this->LoopingDrip = NULL;
    this->InterpolationRate = 1;
    this->ShieldOverride = 1;
    this->bUseShieldOverride = false;
    this->AssociatedPS = NULL;
    this->AssociatedAnimInstance = NULL;
    this->BodyMID = NULL;
}

