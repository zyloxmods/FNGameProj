#include "FortAthenaAIBotEvaluator_SelectNextPOI.h"

UFortAthenaAIBotEvaluator_SelectNextPOI::UFortAthenaAIBotEvaluator_SelectNextPOI() {
    this->NextPOIKeyName = TEXT("AIEvaluator_POINavigation_NextPOI");
    this->MarkerLocationKeyName = TEXT("AIEvaluator_Marker_MarkerLocation");
    this->CacheLootingSkillSet = NULL;
}

