#include "EasyAntiCheatNetComponent.h"

void UEasyAntiCheatNetComponent::ServerMessage_Implementation(const TArray<uint8>& MESSAGE) {
}
bool UEasyAntiCheatNetComponent::ServerMessage_Validate(const TArray<uint8>& MESSAGE) {
    return true;
}

void UEasyAntiCheatNetComponent::ClientMessage_Implementation(const TArray<uint8>& MESSAGE) {
}

UEasyAntiCheatNetComponent::UEasyAntiCheatNetComponent() {
}

