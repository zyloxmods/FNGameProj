#include "FortMinigameObjectiveTrackerComponent.h"
#include "Net/UnrealNetwork.h"

void UFortMinigameObjectiveTrackerComponent::UpdateTrackedProgress(UFortMinigameObjectiveComponent* Objective) {
}

void UFortMinigameObjectiveTrackerComponent::StopTrackingObjective(UFortMinigameObjectiveComponent* Objective, bool bPurgeHistory) {
}

int32 UFortMinigameObjectiveTrackerComponent::StartTrackingObjective(UFortMinigameObjectiveComponent* Objective, int32 IndicatorPresetIndex) {
    return 0;
}

void UFortMinigameObjectiveTrackerComponent::SetTrackedState(UFortMinigameObjectiveComponent* Objective) {
}

void UFortMinigameObjectiveTrackerComponent::SetIsInteractionAllowed(UFortMinigameObjectiveComponent* Objective) {
}

void UFortMinigameObjectiveTrackerComponent::HandleMinigameEnded() {
}

bool UFortMinigameObjectiveTrackerComponent::GetTrackedObjectivesByQuery(TArray<FTrackedObjective>& TrackedObjectives, uint8 TeamIndex, ETrackedObjectiveQuery QueryType) const {
    return false;
}

bool UFortMinigameObjectiveTrackerComponent::GetTrackedObjective(int32 TrackedIndex, FTrackedObjective& TrackedObjective) const {
    return false;
}

void UFortMinigameObjectiveTrackerComponent::ClearTrackedObjectives() {
}

void UFortMinigameObjectiveTrackerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameObjectiveTrackerComponent, ObjectiveArray);
}

UFortMinigameObjectiveTrackerComponent::UFortMinigameObjectiveTrackerComponent() {
}

