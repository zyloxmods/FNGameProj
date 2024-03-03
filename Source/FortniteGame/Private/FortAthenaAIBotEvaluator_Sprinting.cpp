#include "FortAthenaAIBotEvaluator_Sprinting.h"

UFortAthenaAIBotEvaluator_Sprinting::UFortAthenaAIBotEvaluator_Sprinting() {
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->bSprintOnlyInWater = false;
    this->SkillSet = NULL;
}

