#include "FortAthenaAIBotEvaluator_ReachBeacon.h"

UFortAthenaAIBotEvaluator_ReachBeacon::UFortAthenaAIBotEvaluator_ReachBeacon() {
    this->ReachBeaconStatusKeyName = TEXT("AIEvaluator_ReachBeacon_ExecutionStatus");
    this->ReachBeaconMovementStateKeyName = TEXT("AIEvaluator_ReachBeacon_MovementState");
    this->ReachBeaconTargetKeyName = TEXT("AIEvaluator_ReachBeacon_Target");
    this->CurrentBeacon = NULL;
    this->CachedServerManager = NULL;
}

