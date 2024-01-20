#include "FortPickupInstigatorRegistryComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPickupInstigatorRegistryComponent::RemovePickupInstigator(UObject* PickupInstigator) {
}

void UFortPickupInstigatorRegistryComponent::NotifyItemRemoved(int32 TrackedIndex) {
}

void UFortPickupInstigatorRegistryComponent::HandleMinigameEnded() {
}

bool UFortPickupInstigatorRegistryComponent::GetInstigatorData(int32 TrackedIndex, FPickupInstigatorData& InstigatorData) const {
    return false;
}

bool UFortPickupInstigatorRegistryComponent::GetInstigator(int32 TrackedIndex, FPickupInstigator& PickupInstigator) const {
    return false;
}

void UFortPickupInstigatorRegistryComponent::ClearPickupInstigators() {
}

int32 UFortPickupInstigatorRegistryComponent::AddPickupInstigator(UObject* PickupInstigator) {
    return 0;
}

void UFortPickupInstigatorRegistryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPickupInstigatorRegistryComponent, InstigatorRegistry);
}

UFortPickupInstigatorRegistryComponent::UFortPickupInstigatorRegistryComponent() {
}

