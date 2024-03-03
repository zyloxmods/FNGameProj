#include "EasyAntiCheatNetComponent.h"

void UEasyAntiCheatNetComponent::ServerMessage_Implementation(const TArray<uint8>& Message) {
}
bool UEasyAntiCheatNetComponent::ServerMessage_Validate(const TArray<uint8>& Message) {
    return true;
}

void UEasyAntiCheatNetComponent::ClientMessage_Implementation(const TArray<uint8>& Message) {
}

UEasyAntiCheatNetComponent::UEasyAntiCheatNetComponent() {
}

