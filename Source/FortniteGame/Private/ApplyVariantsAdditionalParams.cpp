#include "ApplyVariantsAdditionalParams.h"

FApplyVariantsAdditionalParams::FApplyVariantsAdditionalParams() {
    this->bApplyToAdditionalVariantComponentsOnly = false;
    this->bDeriveMIDNameFromParent = false;
    this->bShouldResetOverrideMaterialsOnMeshSwap = false;
    this->bBackpackReliesOnVariantsFromCID = false;
    this->bGliderReliesOnVariantsFromCID = false;
    this->bForbidParticleSwapping = false;
}

