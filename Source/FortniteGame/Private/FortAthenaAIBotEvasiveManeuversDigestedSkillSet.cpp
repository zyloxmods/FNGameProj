#include "FortAthenaAIBotEvasiveManeuversDigestedSkillSet.h"

UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::UFortAthenaAIBotEvasiveManeuversDigestedSkillSet() {
    this->JumpDelay = 1;
    this->JumpRandomDeviationDelay = 1;
    this->CrouchDelay = 1;
    this->CrouchRandomDeviationDelay = 1;
    this->DodgeDelay = 1;
    this->DodgeRandomDeviationDelay = 1;
    this->CrouchOverlayWeight = 1;
    this->JumpOverlayWeight = 1;
    this->NoOverlayWeight = 1;
    this->DodgeWeight = 1;
    this->DodgeDistanceMax = 1;
    this->DodgeDistanceMin = 1;
    this->CrouchTimeMax = 1;
    this->CrouchTimeMin = 1;
    this->DodgeMaxDistanceSquared = 1;
    this->CrouchMaxDistanceSquared = 1;
    this->JumpMaxDistanceSquared = 1;
    this->AvoidProjectilesReactionDistanceSqr = 1;
    this->AvoidProjectilesReactionTimeMin = 1;
    this->AvoidProjectilesReactionTimeMax = 1;
    this->AvoidProjectilesEvasiveDistanceMin = 1;
    this->AvoidProjectilesEvasiveDistanceMax = 1;
}

