#include "FortAthenaAIBotPerceptionDigestedSkillSet.h"

UFortAthenaAIBotPerceptionDigestedSkillSet::UFortAthenaAIBotPerceptionDigestedSkillSet() {
    SightReactionTime = 1;
    SightRandomDeviation = 1;
    LoseSightTime = 1;
    LoseSightRandomDeviation = 1;
    SightSuspicionTime = 1;
    SightSuspicionRandomDeviation = 1;
    EnemyMarkedReactionTime = 1;
    EnemyMarkedReactionRandomDeviation = 1;
    ChancesToHelpOnMarkedEnemy = 1;
    DamageReactionTime = 1;
    DamageRandomDeviation = 1;
    HearingReactionTime = 1;
    HearingRandomDeviation = 1;
    MaxHearingLocationError = 1;
    ThreatDamageWeight = 1;
    ThreatDamageWeightMultiplier = 1;
    ObstacleDistanceOverrideTargetingSq = 1;
    ObstacleForgetDistanceSq = 1;
    DBNOWeightModifier = 1;
    AlertedAccumulatedLoudnessLimit = 1;
    LKPAccumulatedLoudnessLimit = 1;
    EnemyMarkingDelay = 1;
    EnemyMarkingDelayRandomDeviation = 1;
    AdditionalMarkedEnemyLKPForgetTime = 1;
    AdditionalMarkedEnemyLKPForgetDistance = 1;
    ProjectileThreatForgetTime = 1;
    bStealthMeterEnable = false;
    StealthMeterThreshold = 1;
    StealthMeterDecreaseSpeed = 1;
    bStealthMeterAllowSharedTarget = false;
}

