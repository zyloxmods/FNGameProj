#include "FortGameplayDataTrackerComponentManager.h"

void UFortGameplayDataTrackerComponentManager::UnRegisterTrackedStateActor(AActor* Actor) {
}

void UFortGameplayDataTrackerComponentManager::SetTrackedActorState(AActor* Actor, const FGameplayTag& CurrentState) {
}

void UFortGameplayDataTrackerComponentManager::RegisterTrackedStateActor(AActor* Actor, const FGameplayTag& InitialState) {
}

void UFortGameplayDataTrackerComponentManager::OnTrackedActorDestroyed(AActor* DestroyedActor) {
}

void UFortGameplayDataTrackerComponentManager::GetRegisteredDataTrackerComponents(TArray<UFortGameplayDataTrackerComponent*>& OutDataTrackerComponents) {
}

UFortGameplayDataTrackerComponentManager* UFortGameplayDataTrackerComponentManager::GetCurrent(UObject* WorldContextObject) {
    return NULL;
}

UFortGameplayDataTrackerComponentManager::UFortGameplayDataTrackerComponentManager() {
}

