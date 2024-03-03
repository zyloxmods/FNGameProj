#include "FortAthenaAIBotMovementDigestedSkillSet.h"

UFortAthenaAIBotMovementDigestedSkillSet::UFortAthenaAIBotMovementDigestedSkillSet() {
    this->SlowDownDistance = 1;
    this->TraversalSpeedEstimation = 1;
    this->TraversalSpeedEstimationWithThreat = 1;
    this->GliderDeployMinAngle = 1;
    this->GliderDeployMaxAngle = 1;
    this->GliderNoiseMaxDistance = 1;
    this->GliderNoiseMinDelay = 1;
    this->GliderNoiseMaxDelay = 1;
    this->JumpOffMinAngle = 1;
    this->JumpOffMaxAngle = 1;
    this->MaxPatrolDistance = 1;
    this->MaxPatrolDistanceRandomDeviation = 1;
    this->WobbleProbability = 1;
    this->MaxDelayBetweenWobblingMovement = 1;
    this->MaxDelayBetweenWobblingMovementRandomDeviation = 1;
    this->bAllowSwimWobble = false;
    this->MaxWobblingDuration = 1;
    this->MaxWobblingDurationRandomDeviation = 1;
    this->MaxWobblingIntensity = 1;
    this->WobblingIntensityDeviation = 1;
    this->MaxWobblingFrequency = 1;
    this->WobblingFrequencyDeviation = 1;
    this->WobblingStickToPathCorridorStrength = 1;
    this->MaxAfterLaunchedPauseTime = 1;
    this->AfterLaunchedPauseTimeDeviation = 1;
    this->bSteerMovementWhenLaunched = true;
    this->SteerMovementWhenLaunchedDirectionUpdateTime = 1;
    this->MaxReactionTimeToDangerZone = 1;
    this->MaxReactionTimeToDangerZoneDeviation = 1;
    this->bLimitBlockingObstacleAngle = false;
    this->SwimSprintJumpDelay = 1;
    this->SwimSprintJumpDelayDeviation = 1;
    this->SwimUnblockJumpHeightThreshold = 1;
    this->MoveToRangeAttackMinOffset = 1;
    this->MoveToRangeAttackMaxOffset = 1;
    this->LKPMinOffset = 1;
    this->LKPMaxOffset = 1;
}

