#include "FortMinigameProgressComponent.h"
#include "Net/UnrealNetwork.h"

void UFortMinigameProgressComponent::StartProgress(APlayerState* PlayerState) {
}

void UFortMinigameProgressComponent::RevertProgress(APlayerState* PlayerState) {
}

bool UFortMinigameProgressComponent::HasActivationTime() const {
    return false;
}

void UFortMinigameProgressComponent::FinishProgress(APlayerState* PlayerState) {
}

void UFortMinigameProgressComponent::AbortProgress(APlayerState* PlayerState) {
}

void UFortMinigameProgressComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameProgressComponent, ActivationTime);
}

UFortMinigameProgressComponent::UFortMinigameProgressComponent() {
    ActivationTime = 1;
}

