#include "FortMinigamePlayerStartComponent.h"

void UFortMinigamePlayerStartComponent::SetPlayerCheckpoint(APlayerState* Player, float Value) {
}

void UFortMinigamePlayerStartComponent::ResetCheckpoints() {
}

bool UFortMinigamePlayerStartComponent::GetPlayerCheckpointValue(APlayerState* Player, float& OutValue) const {
    return false;
}

UFortMinigamePlayerStartComponent::UFortMinigamePlayerStartComponent() {
    this->PlayerStart = NULL;
    this->bIsCheckpoint = false;
}

