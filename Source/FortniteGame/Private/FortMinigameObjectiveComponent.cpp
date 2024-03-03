#include "FortMinigameObjectiveComponent.h"

void UFortMinigameObjectiveComponent::StopTracking(bool bPurgeHistory, float Percentage) {
}

void UFortMinigameObjectiveComponent::StartTracking(int32 IndicatorPresetIndex, float Percentage, EObjectiveType Type, uint8 State, uint8 StateOwnerTeam, bool bInIsInteractionAllowed) {
}

void UFortMinigameObjectiveComponent::SetTrackedState(uint8 InState, uint8 InStateOwnerTeam) {
}

void UFortMinigameObjectiveComponent::SetTrackedProgress(float Percentage) {
}

void UFortMinigameObjectiveComponent::SetIsInteractionAllowed(bool bInIsInteractionAllowed) {
}

UFortMinigameObjectiveComponent::UFortMinigameObjectiveComponent() {
    this->TrackedIndex = 0;
    this->ProgressPercentage = 1;
    this->TrackedState = 0;
    this->TrackedStateOwnerTeam = 0;
    this->bIsInteractionAllowed = false;
    this->ObjectiveType = EObjectiveType::DestructionObjective;
    this->bPurgeTrackingHistoryOnRemoval = true;
}

