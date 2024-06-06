#include "FortAthenaAIBotEvaluator_StealWall.h"

UFortAthenaAIBotEvaluator_StealWall::UFortAthenaAIBotEvaluator_StealWall() {
    StealWallBuildTypeName = TEXT("AIEvaluator_StealWallBuilding_Type");
    StealWallBuildGridCoordName = TEXT("AIEvaluator_StealWallBuilding_GridCoord");
    TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    CacheBuildingDigestedSkillSet = NULL;
    CurrentBuildingTarget = NULL;
}

