#include "AthenaAISettings.h"

UAthenaAISettings::UAthenaAISettings() {
    bAllowAIDirector = true;
    bAllowAIGoalManager = false;
    bForceRVOUse = true;
    MaxPlayerSpeedScaleFootstepSounds = 1;
    MinFootstepHearingRange = 1;
    MaxFootstepHearingRange = 1;
    DamagedHearingRange = 1;
    CrouchHearingModifier = 1;
    MaxNPCHearingRange = 1;
    MaxPerceptualStimuliAge = 1;
    DeAggroRange = 1;
    ReducedDeAggroRange = 1;
    DurationReduceAggroLimits = 1;
    NavigationSystemConfig = NULL;
}

