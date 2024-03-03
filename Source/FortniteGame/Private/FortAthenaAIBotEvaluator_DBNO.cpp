#include "FortAthenaAIBotEvaluator_DBNO.h"

UFortAthenaAIBotEvaluator_DBNO::UFortAthenaAIBotEvaluator_DBNO() {
    this->DBNODestinationKeyName = TEXT("AIEvaluator_DBNO_Destination");
    this->bAllowReachSquadmates = true;
    this->bAllowReachSameFactionNPCs = false;
    this->DBNOSkillSet = NULL;
}

