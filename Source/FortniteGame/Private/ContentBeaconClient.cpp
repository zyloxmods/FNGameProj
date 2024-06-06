#include "ContentBeaconClient.h"
#include "Net/UnrealNetwork.h"

void AContentBeaconClient::ServerUnloadManifestContentComplete_Implementation() {
}
bool AContentBeaconClient::ServerUnloadManifestContentComplete_Validate() {
    return true;
}

void AContentBeaconClient::ServerFinishDisconnect_Implementation() {
}
bool AContentBeaconClient::ServerFinishDisconnect_Validate() {
    return true;
}

void AContentBeaconClient::ServerCheckAdditionalContentIsRequired_Implementation(const FString& ClientConsumerFilterPlatform) {
}
bool AContentBeaconClient::ServerCheckAdditionalContentIsRequired_Validate(const FString& ClientConsumerFilterPlatform) {
    return true;
}

void AContentBeaconClient::OnRep_HostActivatedContent() {
}

void AContentBeaconClient::OnRep_ClientAdditionalContentBundles() {
}

void AContentBeaconClient::ClientUnloadManifestContent_Implementation(const TArray<FString>& PluginURls) {
}

void AContentBeaconClient::ClientNotifyDisconnect_Implementation() {
}

void AContentBeaconClient::ClientAdditionConentIsRequiredCheckComplete_Implementation(bool bAdditionalContentRequired) {
}

void AContentBeaconClient::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AContentBeaconClient, ClientContentManifest);
    DOREPLIFETIME(AContentBeaconClient, bHostActivatedContent);
}

AContentBeaconClient::AContentBeaconClient() {
    ClientContentReadiness = EClientContentReadiness::AwaitingServerResponse;
    bHostActivatedContent = false;
}

