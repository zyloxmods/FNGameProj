#include "VariantParticleSystemInitializerData.h"

FVariantParticleSystemInitializerData::FVariantParticleSystemInitializerData() {
    LocationRule = EAttachmentRule::KeepRelative;
    RotationRule = EAttachmentRule::KeepRelative;
    ScaleRule = EAttachmentRule::KeepRelative;
    bWeldSimulatedBodies = false;
}

