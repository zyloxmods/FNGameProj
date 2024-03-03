#include "FortVehicleImminentCollisionComponent.h"

UFortVehicleImminentCollisionComponent::UFortVehicleImminentCollisionComponent() {
    this->bAllowHitPawns = true;
    this->bAllowHitBuildingPieces = true;
    this->bDoMultiSweep = false;
    this->bOnlyAffectBuildingsIfKillingDamage = true;
    this->ClientIgnoreBuildingActorsTime = 1;
    this->NoVehicleDamageTagName = TEXT("NoVehicleDamage");
    this->BoxTraceSingleName = TEXT("ImminentCollisionSweep");
    this->DestructionTraceSocket = TEXT("DestructionTraceSocket");
    this->bUpdateTimeoutIgnoreBuildingActors = false;
    this->TraceChannel = ECC_GameTraceChannel10;
    this->bAlignLookAheadDirectionWithVehicleYAxis = false;
    this->bAlignLookAheadDirectionWithVehicleZAxis = false;
    this->VehicleApproxHalfLength = 1;
}

