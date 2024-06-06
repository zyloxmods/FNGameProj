#include "FortPickupCreative.h"
#include "Net/UnrealNetwork.h"

void AFortPickupCreative::SetItemResourceCost(const EFortResourceType ResourceType, const int32 Cost) {
}

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
    
    DOREPLIFETIME(AFortPickupCreative, CostComponent);
    DOREPLIFETIME(AFortPickupCreative, CachedPickupInstigatorHandle);
}

AFortPickupCreative::AFortPickupCreative() {
    CostComponent = NULL;
    bPickupOnTouch = false;
    CachedPickupInstigatorHandle = 0;
    bUseOverrideDespawnTime = false;
    OverrideDespawnTime = 1;
}

