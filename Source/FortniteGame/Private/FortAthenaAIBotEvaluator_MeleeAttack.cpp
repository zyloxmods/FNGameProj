#include "FortAthenaAIBotEvaluator_MeleeAttack.h"

UFortAthenaAIBotEvaluator_MeleeAttack::UFortAthenaAIBotEvaluator_MeleeAttack() {
    WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    bPrioritizeMovingTowardsThreatOverCurrentTarget = false;
    AttackingSkillSet = NULL;
    BlacklistReachingTarget = NULL;
}

