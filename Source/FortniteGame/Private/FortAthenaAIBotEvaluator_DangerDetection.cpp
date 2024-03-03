#include "FortAthenaAIBotEvaluator_DangerDetection.h"

UFortAthenaAIBotEvaluator_DangerDetection::UFortAthenaAIBotEvaluator_DangerDetection() {
    this->DangerNavAreaClass = NULL;
    this->TimeToCheckForDangerAfterValidQuery = 1;
    this->SafeLocationFilterClass = NULL;
    this->DangerZoneDetectedExecutionStatusName = TEXT("AIEvaluator_DangerZoneDetected_ExecutionStatus");
    this->DangerZoneDetectedSafeLocationKeyName = TEXT("AIEvaluator_DangerZoneDetected_SafeLocation");
    this->CachedMovementSkillSet = NULL;
}

