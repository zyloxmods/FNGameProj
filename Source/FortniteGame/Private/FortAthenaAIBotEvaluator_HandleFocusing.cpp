#include "FortAthenaAIBotEvaluator_HandleFocusing.h"

UFortAthenaAIBotEvaluator_HandleFocusing::UFortAthenaAIBotEvaluator_HandleFocusing() {
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->FocusActorName = TEXT("AIEvaluator_Global_FocusActor");
    this->FocalPointName = TEXT("AIEvaluator_Global_FocalPoint");
    this->FocusingBehavior = EFocusingBehavior::FocusCurrentTarget;
    this->bPrioritizeThreatOverCurrentTarget = false;
    this->CacheAimingDigestedSkillSet = NULL;
    this->LastTargetedThreat = NULL;
    this->FocusActor = NULL;
}

