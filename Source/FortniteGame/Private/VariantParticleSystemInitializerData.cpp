#include "VariantParticleSystemInitializerData.h"

FVariantParticleSystemInitializerData::FVariantParticleSystemInitializerData() {
    this->LocationRule = EAttachmentRule::KeepRelative;
    this->RotationRule = EAttachmentRule::KeepRelative;
    this->ScaleRule = EAttachmentRule::KeepRelative;
    this->bWeldSimulatedBodies = false;
}

