#include "FortAthenaAIBotPerceptionDigestedSkillSet.h"

UFortAthenaAIBotPerceptionDigestedSkillSet::UFortAthenaAIBotPerceptionDigestedSkillSet() {
    this->SightReactionTime = 1;
    this->SightRandomDeviation = 1;
    this->LoseSightTime = 1;
    this->LoseSightRandomDeviation = 1;
    this->SightSuspicionTime = 1;
    this->SightSuspicionRandomDeviation = 1;
    this->EnemyMarkedReactionTime = 1;
    this->EnemyMarkedReactionRandomDeviation = 1;
    this->ChancesToHelpOnMarkedEnemy = 1;
    this->DamageReactionTime = 1;
    this->DamageRandomDeviation = 1;
    this->HearingReactionTime = 1;
    this->HearingRandomDeviation = 1;
    this->MaxHearingLocationError = 1;
    this->ThreatDamageWeight = 1;
    this->ThreatDamageWeightMultiplier = 1;
    this->ObstacleDistanceOverrideTargetingSq = 1;
    this->ObstacleForgetDistanceSq = 1;
    this->DBNOWeightModifier = 1;
    this->AlertedAccumulatedLoudnessLimit = 1;
    this->LKPAccumulatedLoudnessLimit = 1;
    this->EnemyMarkingDelay = 1;
    this->EnemyMarkingDelayRandomDeviation = 1;
    this->AdditionalMarkedEnemyLKPForgetTime = 1;
    this->AdditionalMarkedEnemyLKPForgetDistance = 1;
    this->ProjectileThreatForgetTime = 1;
    this->bStealthMeterEnable = false;
    this->StealthMeterThreshold = 1;
    this->StealthMeterDecreaseSpeed = 1;
    this->bStealthMeterAllowSharedTarget = false;
}

