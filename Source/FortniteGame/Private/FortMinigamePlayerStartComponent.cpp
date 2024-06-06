#include "FortMinigamePlayerStartComponent.h"

void UFortMinigamePlayerStartComponent::StorePlayerCheckpoint(APlayerState* Player) {
}

void UFortMinigamePlayerStartComponent::ResetCheckpoints() {
}

bool UFortMinigamePlayerStartComponent::HasAnyCheckpointValue() const {
    return false;
}

bool UFortMinigamePlayerStartComponent::GetPlayerCheckpointLastUsedTime(APlayerState* Player, FDateTime& OutTime) const {
    return false;
}

UFortMinigamePlayerStartComponent::UFortMinigamePlayerStartComponent() {
    bIsCheckpoint = false;
}

