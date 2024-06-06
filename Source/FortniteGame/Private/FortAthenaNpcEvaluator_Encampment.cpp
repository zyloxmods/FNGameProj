#include "FortAthenaNpcEvaluator_Encampment.h"

UFortAthenaNpcEvaluator_Encampment::UFortAthenaNpcEvaluator_Encampment() {
    EncampmentStatusKeyName = TEXT("AIEvaluator_Encampment_ExecutionStatus");
    EncampmentMovementStateKeyName = TEXT("AIEvaluator_Encampment_MovementState");
    EncampmentCenterLocationKeyName = TEXT("AIEvaluator_Encampment_CenterLocation");
    EncampmentDestinationKeyName = TEXT("AIEvaluator_Encampment_Destination");
    EncampmentAroundCampFireLocationKeyName = TEXT("AIEvaluator_Encampment_AroundCampFireLocation");
    EncampmentRoleKeyName = TEXT("AIEvaluator_Encampment_Role");
    DefensiveBuildName = TEXT("AIEvaluator_DefensiveBuilding_ExecutionStatus");
    DefensiveBuildTypeName = TEXT("AIEvaluator_DefensiveBuilding_Type");
    DefensiveBuildGridCoordName = TEXT("AIEvaluator_DefensiveBuilding_GridCoord");
}

