#include "FortMinigameObjectiveComponent.h"

void UFortMinigameObjectiveComponent::StopTracking(bool bPurgeHistory, float Percentage) {
}

void UFortMinigameObjectiveComponent::StartTracking(int32 IndicatorPresetIndex, float Percentage) {
}

void UFortMinigameObjectiveComponent::SetTrackedProgress(float Percentage) {
}

UFortMinigameObjectiveComponent::UFortMinigameObjectiveComponent() {
    this->TrackedIndex = -1;
    this->ProgressPercentage = 0.00f;
    this->bPurgeTrackingHistoryOnRemoval = true;
}

