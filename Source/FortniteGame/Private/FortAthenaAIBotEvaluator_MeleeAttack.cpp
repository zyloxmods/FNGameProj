#include "FortAthenaAIBotEvaluator_MeleeAttack.h"

UFortAthenaAIBotEvaluator_MeleeAttack::UFortAthenaAIBotEvaluator_MeleeAttack() {
    this->WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->bPrioritizeMovingTowardsThreatOverCurrentTarget = false;
    this->AttackingSkillSet = NULL;
    this->BlacklistReachingTarget = NULL;
}

