#include "FortAthenaAIBotEvaluator_Revive.h"

UFortAthenaAIBotEvaluator_Revive::UFortAthenaAIBotEvaluator_Revive() {
    ReviveTargetKeyName = TEXT("AIEvaluator_Revive_Target");
    bAllowReviveSquadmates = true;
    bAllowReviveSameFactionNPCs = false;
    bUseReviveToken = false;
    MaxDistanceToRevive = 1;
    CurrentReviveTarget = NULL;
    ReviveSkillSet = NULL;
}

