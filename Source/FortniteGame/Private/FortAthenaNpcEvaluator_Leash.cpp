#include "FortAthenaNpcEvaluator_Leash.h"

UFortAthenaNpcEvaluator_Leash::UFortAthenaNpcEvaluator_Leash() {
    this->LeashKeyName = TEXT("AIEvaluator_Leash_ExecutionStatus");
    this->LeashMovementStateKeyName = TEXT("AIEvaluator_Leash_MovementState");
    this->LeashDestinationKeyName = TEXT("AIEvaluator_Leash_Destination");
    this->LeashLocationKeyName = TEXT("AIEvaluator_Leash_Location");
    this->LeashOuterRadiusKeyName = TEXT("AIEvaluator_Leash_OuterRadius");
}

