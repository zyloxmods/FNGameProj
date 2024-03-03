#include "MeshBeaconClient.h"
#include "Net/UnrealNetwork.h"

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility_Implementation(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
}
bool AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility_Validate(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
    return true;
}

void AMeshBeaconClient::ServerUpdateLevelVisibility_Implementation(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) {
}
bool AMeshBeaconClient::ServerUpdateLevelVisibility_Validate(const FUpdateLevelVisibilityLevelInfo& LevelVisibility) {
    return true;
}

void AMeshBeaconClient::OnRep_ParentIds() {
}

void AMeshBeaconClient::OnRep_MeshPingTime() {
}

void AMeshBeaconClient::OnRep_ConnectedToRoot() {
}

void AMeshBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMeshBeaconClient, bConnectedToRoot);
    DOREPLIFETIME(AMeshBeaconClient, MeshPingTime);
    DOREPLIFETIME(AMeshBeaconClient, ParentIds);
}

AMeshBeaconClient::AMeshBeaconClient() {
    this->bConnectedToRoot = false;
}

