#include "FortPickupInstigatorRegistryComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPickupInstigatorRegistryComponent::ResolvePendingRepOverrides() {
}

void UFortPickupInstigatorRegistryComponent::RemovePickupInstigator(UObject* PickupInstigator, int32 ItemIndex) {
}

void UFortPickupInstigatorRegistryComponent::RemoveAllItemsForPickupInstigator(UObject* PickupInstigator) {
}

void UFortPickupInstigatorRegistryComponent::PostReplicateRepOverrides() {
}

void UFortPickupInstigatorRegistryComponent::OnRep_InstigatorRegistry() {
}

void UFortPickupInstigatorRegistryComponent::NotifyPickupSpawned(int32 TrackedIndex, AFortPickup* Pickup) {
}

void UFortPickupInstigatorRegistryComponent::NotifyPickupDropped(int32 TrackedIndex, AFortPickup* Pickup) {
}

void UFortPickupInstigatorRegistryComponent::NotifyPickupCaptured(int32 TrackedIndex, AFortPickup* Pickup) {
}

void UFortPickupInstigatorRegistryComponent::NotifyItemRemoved(int32 TrackedIndex, APlayerController* PlayerController, const FFortItemEntry& ItemEntry) {
}

void UFortPickupInstigatorRegistryComponent::NotifyItemCaptured(int32 TrackedIndex, APlayerController* PlayerController, const FFortItemEntry& ItemEntry) {
}

void UFortPickupInstigatorRegistryComponent::HandlePickupDestroyed(AFortPickup* Pickup) {
}

void UFortPickupInstigatorRegistryComponent::HandlePickupClaimed(AFortPickup* Pickup, AFortPawn* InteractingPawn, const UFortWorldItemDefinition* ItemDefinition, FVector PickupLocation) {
}

bool UFortPickupInstigatorRegistryComponent::GetPickupEventHandler(int32 TrackedIndex, TScriptInterface<IFortPickupEventHandler>& EventHandler) const {
    return false;
}

bool UFortPickupInstigatorRegistryComponent::GetInstigatorData(int32 TrackedIndex, FPickupInstigatorData& InstigatorData) const {
    return false;
}

bool UFortPickupInstigatorRegistryComponent::GetInstigator(int32 TrackedIndex, FPickupInstigator& PickupInstigator) const {
    return false;
}

void UFortPickupInstigatorRegistryComponent::DestroySpawnedPickups(AActor* ActorContext, int32 TrackedIndex) {
}

void UFortPickupInstigatorRegistryComponent::DestroyDroppedPickups(AActor* ActorContext, int32 TrackedIndex) {
}

void UFortPickupInstigatorRegistryComponent::ClearPickupInstigators() {
}

int32 UFortPickupInstigatorRegistryComponent::AddPickupInstigator(UObject* PickupInstigator, int32 ItemIndex) {
    return 0;
}

void UFortPickupInstigatorRegistryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPickupInstigatorRegistryComponent, InstigatorRegistry);
}

UFortPickupInstigatorRegistryComponent::UFortPickupInstigatorRegistryComponent() {
}

