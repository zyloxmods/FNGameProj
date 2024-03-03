#include "FortAthenaAIBotEvaluator_DefensiveBuilding.h"

UFortAthenaAIBotEvaluator_DefensiveBuilding::UFortAthenaAIBotEvaluator_DefensiveBuilding() {
    this->DefensiveBuildTypeName = TEXT("AIEvaluator_DefensiveBuilding_Type");
    this->DefensiveBuildGridCoordName = TEXT("AIEvaluator_DefensiveBuilding_GridCoord");
    this->CacheBuildingDigestedSkillSet = NULL;
}

