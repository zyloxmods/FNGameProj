#include "PlayspaceManagerComponent.h"
#include "Net/UnrealNetwork.h"

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime) {
    return false;
}

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume) {
}

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(APlayerState* PlayerState, AGameplayVolume* Volume) {
}

void UPlayspaceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayspaceManagerComponent, RootPlayspace);
}

UPlayspaceManagerComponent::UPlayspaceManagerComponent() {
    this->RootPlayspace = NULL;
}

