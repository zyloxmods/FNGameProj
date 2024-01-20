#include "FortPickupCreative.h"
#include "Net/UnrealNetwork.h"

void AFortPickupCreative::OnRep_PickupInstigatorIndex() {
}

void AFortPickupCreative::OnPickupInstigatorDataRemoved(int32 TrackedIndex) {
}

void AFortPickupCreative::OnPickupInstigatorDataChanged(int32 TrackedIndex) {
}

void AFortPickupCreative::GivePickupToPawn(AFortPawn* Pawn, bool DestoryAfterPickup) {
}

float AFortPickupCreative::GetAccentColorParam() const {
    return 0.0f;
}

void AFortPickupCreative::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPickupCreative, PickupInstigatorIndex);
}

AFortPickupCreative::AFortPickupCreative() {
    this->PickupInstigatorIndex = -1;
    this->bUseOverrideDespawnTime = false;
    this->OverrideDespawnTime = 0.00f;
}

