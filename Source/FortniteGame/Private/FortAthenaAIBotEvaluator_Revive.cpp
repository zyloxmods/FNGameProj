#include "FortAthenaAIBotEvaluator_Revive.h"

UFortAthenaAIBotEvaluator_Revive::UFortAthenaAIBotEvaluator_Revive() {
    this->ReviveTargetKeyName = TEXT("AIEvaluator_Revive_Target");
    this->bAllowReviveSquadmates = true;
    this->bAllowReviveSameFactionNPCs = false;
    this->bUseReviveToken = false;
    this->MaxDistanceToRevive = 1;
    this->CurrentReviveTarget = NULL;
    this->ReviveSkillSet = NULL;
}

