#include "FortAthenaBTService_BuildConstruction.h"

UFortAthenaBTService_BuildConstruction::UFortAthenaBTService_BuildConstruction() {
    this->DefensiveBuildName = TEXT("AIEvaluator_DefensiveBuilding_ExecutionStatus");
    this->DefensiveBuildTypeName = TEXT("AIEvaluator_DefensiveBuilding_Type");
    this->DefensiveBuildGridCoordName = TEXT("AIEvaluator_DefensiveBuilding_GridCoord");
    this->StealWallBuildName = TEXT("AIEvaluator_StealWallBuilding_ExecutionStatus");
    this->StealWallBuildTypeName = TEXT("AIEvaluator_StealWallBuilding_Type");
    this->StealWallBuildGridCoordName = TEXT("AIEvaluator_StealWallBuilding_GridCoord");
}

