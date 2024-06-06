#include "FortVehicleImminentCollisionComponent.h"

UFortVehicleImminentCollisionComponent::UFortVehicleImminentCollisionComponent() {
    bAllowHitPawns = true;
    bAllowHitBuildingPieces = true;
    bDoMultiSweep = false;
    bOnlyAffectBuildingsIfKillingDamage = true;
    ClientIgnoreBuildingActorsTime = 1;
    NoVehicleDamageTagName = TEXT("NoVehicleDamage");
    BoxTraceSingleName = TEXT("ImminentCollisionSweep");
    DestructionTraceSocket = TEXT("DestructionTraceSocket");
    bUpdateTimeoutIgnoreBuildingActors = false;
    TraceChannel = ECC_GameTraceChannel10;
    bAlignLookAheadDirectionWithVehicleYAxis = false;
    bAlignLookAheadDirectionWithVehicleZAxis = false;
    VehicleApproxHalfLength = 1;
}

