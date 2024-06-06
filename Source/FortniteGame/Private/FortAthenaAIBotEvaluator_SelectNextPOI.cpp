#include "FortAthenaAIBotEvaluator_SelectNextPOI.h"

UFortAthenaAIBotEvaluator_SelectNextPOI::UFortAthenaAIBotEvaluator_SelectNextPOI() {
    NextPOIKeyName = TEXT("AIEvaluator_POINavigation_NextPOI");
    MarkerLocationKeyName = TEXT("AIEvaluator_Marker_MarkerLocation");
    CacheLootingSkillSet = NULL;
}

