#include "AthenaAISettings.h"

UAthenaAISettings::UAthenaAISettings() {
    this->bAllowAIDirector = true;
    this->bAllowAIGoalManager = false;
    this->bForceRVOUse = true;
    this->MaxPlayerSpeedScaleFootstepSounds = 440.00f;
    this->MinFootstepHearingRange = 150.00f;
    this->MaxFootstepHearingRange = 4000.00f;
    this->DamagedHearingRange = 1500.00f;
    this->CrouchHearingModifier = 0.10f;
    this->MaxNPCHearingRange = 5500.00f;
    this->MaxPerceptualStimuliAge = 30.00f;
    this->DeAggroRange = 6000.00f;
    this->ReducedDeAggroRange = 4000.00f;
    this->DurationReduceAggroLimits = 30.00f;
    this->NavigationSystemConfig = NULL;
}

