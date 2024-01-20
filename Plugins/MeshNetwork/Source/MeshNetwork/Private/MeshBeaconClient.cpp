#include "MeshBeaconClient.h"
#include "Net/UnrealNetwork.h"

//void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility_Implementation(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
//}
//bool AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility_Validate(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities) {
 //   return true;
//}

void AMeshBeaconClient::ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible) {
}
bool AMeshBeaconClient::ServerUpdateLevelVisibility_Validate(FName PackageName, bool bIsVisible) {
    return true;
}

void AMeshBeaconClient::OnRep_ConnectedToRoot() {
}

void AMeshBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMeshBeaconClient, bConnectedToRoot);
}

AMeshBeaconClient::AMeshBeaconClient() {
    this->bConnectedToRoot = false;
}

