#include "FortMissionTracker.h"

void UFortMissionTracker::RefreshSizeEstimate() {
}

void UFortMissionTracker::HandleSizeEstimateChanged(UObject* ChangedElement) {
}

void UFortMissionTracker::HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging) {
}

UFortMissionTracker::UFortMissionTracker() {
    this->MissionTrackerList = NULL;
    this->MainQuestList = NULL;
    this->PinnedQuestsList = NULL;
    this->AdditionalEntriesIndicator = NULL;
    this->DebugHeightEstimate = NULL;
    this->AllowedSize = 0.00f;
    this->bEnforceHeightLimit = true;
    this->bSizeEstimateNeedsRefresh = false;
}

