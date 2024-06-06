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
    TrackedIndex = 0;
    ProgressPercentage = 1;
    TrackedState = 0;
    TrackedStateOwnerTeam = 0;
    bIsInteractionAllowed = false;
    ObjectiveType = EObjectiveType::DestructionObjective;
    bPurgeTrackingHistoryOnRemoval = true;
}

