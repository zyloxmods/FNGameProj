#include "ApplyVariantsAdditionalParams.h"

FApplyVariantsAdditionalParams::FApplyVariantsAdditionalParams() {
    bApplyToAdditionalVariantComponentsOnly = false;
    bDeriveMIDNameFromParent = false;
    bShouldResetOverrideMaterialsOnMeshSwap = false;
    bBackpackReliesOnVariantsFromCID = false;
    bGliderReliesOnVariantsFromCID = false;
    bForbidParticleSwapping = false;
}

