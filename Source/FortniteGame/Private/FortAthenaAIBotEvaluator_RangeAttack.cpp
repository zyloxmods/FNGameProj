#include "FortAthenaAIBotEvaluator_RangeAttack.h"

UFortAthenaAIBotEvaluator_RangeAttack::UFortAthenaAIBotEvaluator_RangeAttack() {
    WeaponReloadName = TEXT("AIEvaluator_WeaponReload_ExecutionStatus");
    WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    HasLoSOnThreatName = TEXT("AIEvaluator_Global_HasLoSOnThreat");
    CacheRangeAttackDigestedSkillSet = NULL;
    CacheAimingDigestedSkillSet = NULL;
    CachePerceptionDigestedSkillSet = NULL;
    CacheMovementDigestedSkillSet = NULL;
    BlacklistReachingTarget = NULL;
}

