#include "RespawnAndSpectatePlayerComponent.h"
#include "Net/UnrealNetwork.h"

void URespawnAndSpectatePlayerComponent::ServerFadeOutComplete_Implementation() {
}

void URespawnAndSpectatePlayerComponent::OnRep_ReplicateClientScreenFade_FadeIn() {
}

void URespawnAndSpectatePlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URespawnAndSpectatePlayerComponent, RespawnFailSafeTime);
    DOREPLIFETIME(URespawnAndSpectatePlayerComponent, ManagingMutator);
    DOREPLIFETIME(URespawnAndSpectatePlayerComponent, RespawningState);
    DOREPLIFETIME(URespawnAndSpectatePlayerComponent, ReplicateClientScreenFade_FadeIn);
}

URespawnAndSpectatePlayerComponent::URespawnAndSpectatePlayerComponent() {
    this->RespawnFailSafeTime = 1;
    this->ManagingMutator = NULL;
    this->RespawningState = ERespawnAndSpectatePlayerRespawningState::None;
    this->ReplicateClientScreenFade_FadeIn = 0;
}

