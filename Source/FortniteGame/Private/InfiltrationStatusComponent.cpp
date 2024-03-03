#include "InfiltrationStatusComponent.h"
#include "Net/UnrealNetwork.h"

void UInfiltrationStatusComponent::TryExecuteMutatorReady() {
}

void UInfiltrationStatusComponent::OnRoundReset() {
}

void UInfiltrationStatusComponent::OnRep_CachedMutator() {
}

bool UInfiltrationStatusComponent::IsLocalPlayerDefending(AFortPlayerControllerAthena* LocalPlayer) const {
    return false;
}

bool UInfiltrationStatusComponent::IsLocalPlayerAttacking(AFortPlayerControllerAthena* LocalPlayer) const {
    return false;
}

bool UInfiltrationStatusComponent::IsBeingHeldByLocalPlayer(AFortPlayerControllerAthena* LocalPlayer) const {
    return false;
}

bool UInfiltrationStatusComponent::GetIsCurrentlyDefended() const {
    return false;
}

float UInfiltrationStatusComponent::GetGroundTimeRemaining() const {
    return 0.0f;
}

uint8 UInfiltrationStatusComponent::GetDefendingTeam() const {
    return 0;
}

EIntelStateEnum UInfiltrationStatusComponent::GetCurrentIntelState() const {
    return EIntelStateEnum::None;
}

uint8 UInfiltrationStatusComponent::GetAttackingTeam() const {
    return 0;
}

void UInfiltrationStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfiltrationStatusComponent, CachedMutator);
}

UInfiltrationStatusComponent::UInfiltrationStatusComponent() {
}

