#include "FortAthenaAIBotAttackingDigestedSkillSet.h"

UFortAthenaAIBotAttackingDigestedSkillSet::UFortAthenaAIBotAttackingDigestedSkillSet() {
    this->MaxDistanceToEngageMeleeSq = 1;
    this->bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon = false;
    this->MaxDistanceToConsiderAsAnAlternateTargetSq = 1;
    this->bEnableWTFBehavior = true;
    this->MinCooldownDelayBetweenMeleeAttackAttempts = 1;
    this->MaxCooldownDelayBetweenMeleeAttackAttempts = 1;
}

