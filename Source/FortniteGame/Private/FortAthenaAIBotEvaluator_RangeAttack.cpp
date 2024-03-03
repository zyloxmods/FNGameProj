#include "FortAthenaAIBotEvaluator_RangeAttack.h"

UFortAthenaAIBotEvaluator_RangeAttack::UFortAthenaAIBotEvaluator_RangeAttack() {
    this->WeaponReloadName = TEXT("AIEvaluator_WeaponReload_ExecutionStatus");
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    this->HasLoSOnThreatName = TEXT("AIEvaluator_Global_HasLoSOnThreat");
    this->CacheRangeAttackDigestedSkillSet = NULL;
    this->CacheAimingDigestedSkillSet = NULL;
    this->CachePerceptionDigestedSkillSet = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
    this->BlacklistReachingTarget = NULL;
}

