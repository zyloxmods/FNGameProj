#include "FortAthenaAIBotAttackingDigestedSkillSet.h"

UFortAthenaAIBotAttackingDigestedSkillSet::UFortAthenaAIBotAttackingDigestedSkillSet() {
    MaxDistanceToEngageMeleeSq = 1;
    bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon = false;
    MaxDistanceToConsiderAsAnAlternateTargetSq = 1;
    bEnableWTFBehavior = true;
    MinCooldownDelayBetweenMeleeAttackAttempts = 1;
    MaxCooldownDelayBetweenMeleeAttackAttempts = 1;
}

