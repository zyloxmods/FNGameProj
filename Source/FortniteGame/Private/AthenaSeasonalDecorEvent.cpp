#include "AthenaSeasonalDecorEvent.h"

UAthenaSeasonalDecorEvent::UAthenaSeasonalDecorEvent(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bForceBattleBusOverrideEvenIfCosmeticSlotted = false;
    BattleBusOverride = NULL;
}

