#include "FortMeshNetworkEventsSubsystem.h"

bool UFortMeshNetworkEventsSubsystem::IsMeshNetworkEventActive(const FName EventName, const FGameplayTagContainer& Filters) const {
    return false;
}

EMeshNetworkNodeType UFortMeshNetworkEventsSubsystem::GetMeshNetworkNodeType() const {
    return EMeshNetworkNodeType::Root;
}

void UFortMeshNetworkEventsSubsystem::GetActiveMeshNetworkEvents(TArray<FMeshNetworkEventStateData>& ActiveMeshNetworkEvents) const {
}

bool UFortMeshNetworkEventsSubsystem::GetActiveMeshNetworkEvent(FMeshNetworkEventStateData& OutEventData, const FName EventName, const FGameplayTagContainer& EventFilters) const {
    return false;
}

UFortMeshNetworkEventsSubsystem::UFortMeshNetworkEventsSubsystem() {
}

