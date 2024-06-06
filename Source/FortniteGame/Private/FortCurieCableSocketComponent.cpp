#include "FortCurieCableSocketComponent.h"

void UFortCurieCableSocketComponent::SendSignal(FFortCurieCableSocketIdentifier SourceSocketIdentifier, FGameplayTag ElementTag, float Magnitude) {
}

bool UFortCurieCableSocketComponent::IsReceivedElementSignalActive(FFortCurieCableSocketIdentifier SocketIdentifier, FGameplayTag ElementTag) const {
    return false;
}

bool UFortCurieCableSocketComponent::IsCableSocketConnected(FFortCurieCableSocketIdentifier SocketIdentifier) const {
    return false;
}

FGameplayTagContainer UFortCurieCableSocketComponent::GetReceivedElementSignals(FFortCurieCableSocketIdentifier SourceSocketIdentifier) const {
    return FGameplayTagContainer{};
}

float UFortCurieCableSocketComponent::GetReceivedElementSignalMagnitude(FFortCurieCableSocketIdentifier SocketIdentifier, FGameplayTag ElementTag) const {
    return 0.0f;
}

FGameplayTagContainer UFortCurieCableSocketComponent::GetOngoingReceivedElementSignals(FFortCurieCableSocketIdentifier SourceSocketIdentifier) const {
    return FGameplayTagContainer{};
}

FVector UFortCurieCableSocketComponent::GetCableSocketWorldLocation(const FFortCurieCableSocketIdentifier& SocketIdentifier) const {
    return FVector{};
}

void UFortCurieCableSocketComponent::GetCableSocketIdentifiers(TArray<FFortCurieCableSocketIdentifier>& SocketIdentifiers) const {
}

bool UFortCurieCableSocketComponent::GetCableSocketConnection(FFortCurieCableSocketIdentifier SourceSocketIdentifier, AActor*& ConnectedActor, FFortCurieCableSocketIdentifier& ConnectedSocketIdentifier) const {
    return false;
}

bool UFortCurieCableSocketComponent::Disconnect(FFortCurieCableSocketIdentifier SourceSocketIdentifier) {
    return false;
}

bool UFortCurieCableSocketComponent::Connect(FFortCurieCableSocketIdentifier SourceSocketIdentifier, AActor* DestinationActor, FFortCurieCableSocketIdentifier DestinationSocketIdentifier) {
    return false;
}

UFortCurieCableSocketComponent::UFortCurieCableSocketComponent() {
    CableSocketRadius = 1;
}

