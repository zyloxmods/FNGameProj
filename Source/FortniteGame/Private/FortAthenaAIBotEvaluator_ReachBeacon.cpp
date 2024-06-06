#include "FortAthenaAIBotEvaluator_ReachBeacon.h"

UFortAthenaAIBotEvaluator_ReachBeacon::UFortAthenaAIBotEvaluator_ReachBeacon() {
    ReachBeaconStatusKeyName = TEXT("AIEvaluator_ReachBeacon_ExecutionStatus");
    ReachBeaconMovementStateKeyName = TEXT("AIEvaluator_ReachBeacon_MovementState");
    ReachBeaconTargetKeyName = TEXT("AIEvaluator_ReachBeacon_Target");
    CurrentBeacon = NULL;
    CachedServerManager = NULL;
}

