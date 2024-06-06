#include "FortAthenaAIBotEvaluator_DangerDetection.h"

UFortAthenaAIBotEvaluator_DangerDetection::UFortAthenaAIBotEvaluator_DangerDetection() {
    DangerNavAreaClass = NULL;
    TimeToCheckForDangerAfterValidQuery = 1;
    SafeLocationFilterClass = NULL;
    DangerZoneDetectedExecutionStatusName = TEXT("AIEvaluator_DangerZoneDetected_ExecutionStatus");
    DangerZoneDetectedSafeLocationKeyName = TEXT("AIEvaluator_DangerZoneDetected_SafeLocation");
    CachedMovementSkillSet = NULL;
}

