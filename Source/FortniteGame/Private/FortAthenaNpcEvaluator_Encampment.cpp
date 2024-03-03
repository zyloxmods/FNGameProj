#include "FortAthenaNpcEvaluator_Encampment.h"

UFortAthenaNpcEvaluator_Encampment::UFortAthenaNpcEvaluator_Encampment() {
    this->EncampmentStatusKeyName = TEXT("AIEvaluator_Encampment_ExecutionStatus");
    this->EncampmentMovementStateKeyName = TEXT("AIEvaluator_Encampment_MovementState");
    this->EncampmentCenterLocationKeyName = TEXT("AIEvaluator_Encampment_CenterLocation");
    this->EncampmentDestinationKeyName = TEXT("AIEvaluator_Encampment_Destination");
    this->EncampmentAroundCampFireLocationKeyName = TEXT("AIEvaluator_Encampment_AroundCampFireLocation");
    this->EncampmentRoleKeyName = TEXT("AIEvaluator_Encampment_Role");
    this->DefensiveBuildName = TEXT("AIEvaluator_DefensiveBuilding_ExecutionStatus");
    this->DefensiveBuildTypeName = TEXT("AIEvaluator_DefensiveBuilding_Type");
    this->DefensiveBuildGridCoordName = TEXT("AIEvaluator_DefensiveBuilding_GridCoord");
}

