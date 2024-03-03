#include "AthenaAISettings.h"

UAthenaAISettings::UAthenaAISettings() {
    this->bAllowAIDirector = true;
    this->bAllowAIGoalManager = false;
    this->bForceRVOUse = true;
    this->MaxPlayerSpeedScaleFootstepSounds = 1;
    this->MinFootstepHearingRange = 1;
    this->MaxFootstepHearingRange = 1;
    this->DamagedHearingRange = 1;
    this->CrouchHearingModifier = 1;
    this->MaxNPCHearingRange = 1;
    this->MaxPerceptualStimuliAge = 1;
    this->DeAggroRange = 1;
    this->ReducedDeAggroRange = 1;
    this->DurationReduceAggroLimits = 1;
    this->NavigationSystemConfig = NULL;
}

