#include "FortAthenaAIBotEvaluator_HandleFocusing.h"

UFortAthenaAIBotEvaluator_HandleFocusing::UFortAthenaAIBotEvaluator_HandleFocusing() {
    TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    FocusActorName = TEXT("AIEvaluator_Global_FocusActor");
    FocalPointName = TEXT("AIEvaluator_Global_FocalPoint");
    FocusingBehavior = EFocusingBehavior::FocusCurrentTarget;
    bPrioritizeThreatOverCurrentTarget = false;
    CacheAimingDigestedSkillSet = NULL;
    LastTargetedThreat = NULL;
    FocusActor = NULL;
}

