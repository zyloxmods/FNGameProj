#include "FortAthenaAIBotEvaluator_DBNO.h"

UFortAthenaAIBotEvaluator_DBNO::UFortAthenaAIBotEvaluator_DBNO() {
    DBNODestinationKeyName = TEXT("AIEvaluator_DBNO_Destination");
    bAllowReachSquadmates = true;
    bAllowReachSameFactionNPCs = false;
    DBNOSkillSet = NULL;
}

