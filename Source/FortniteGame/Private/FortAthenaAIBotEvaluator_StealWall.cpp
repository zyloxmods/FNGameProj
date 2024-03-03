#include "FortAthenaAIBotEvaluator_StealWall.h"

UFortAthenaAIBotEvaluator_StealWall::UFortAthenaAIBotEvaluator_StealWall() {
    this->StealWallBuildTypeName = TEXT("AIEvaluator_StealWallBuilding_Type");
    this->StealWallBuildGridCoordName = TEXT("AIEvaluator_StealWallBuilding_GridCoord");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->CacheBuildingDigestedSkillSet = NULL;
    this->CurrentBuildingTarget = NULL;
}

