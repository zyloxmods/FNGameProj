#include "FortMeshNetworkEventsLoader.h"
#include "Net/UnrealNetwork.h"

void AFortMeshNetworkEventsLoader::OnMeshNetworkReady(EMeshNetworkNodeType NodeType) {
}

void AFortMeshNetworkEventsLoader::MulticastMeshNetEventBurst_Implementation(FName EventName, const FString& EventParams, const FGameplayTagContainer& Filters) {
}

void AFortMeshNetworkEventsLoader::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMeshNetworkEventsLoader, ActiveMeshNetworkEvents);
}

AFortMeshNetworkEventsLoader::AFortMeshNetworkEventsLoader() {
    bMeshNetworkReady = false;
}

