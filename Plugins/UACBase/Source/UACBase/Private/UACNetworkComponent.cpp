#include "UACNetworkComponent.h"
#include "Net/UnrealNetwork.h"

void UUACNetworkComponent::SendPacketToServer_Implementation(uint8 Type, const TArray<uint8>& Packet) {
}
bool UUACNetworkComponent::SendPacketToServer_Validate(uint8 Type, const TArray<uint8>& Packet) {
    return true;
}

void UUACNetworkComponent::SendPacketToClient_Implementation(uint8 Type, const TArray<uint8>& Packet) {
}

void UUACNetworkComponent::SendClientHello_Implementation(uint32 SessionKey) {
}

void UUACNetworkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUACNetworkComponent, PlayerId);
}

UUACNetworkComponent::UUACNetworkComponent() {
    this->PlayerId = 0;
}

