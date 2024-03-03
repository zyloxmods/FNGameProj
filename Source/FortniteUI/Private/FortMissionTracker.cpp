#include "FortMissionTracker.h"

void UFortMissionTracker::SetEnablePinnedQuestList(bool bEnable) {
}

void UFortMissionTracker::SetEnableMainQuestList(bool bEnable) {
}

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
    this->AllowedSize = 1;
    this->bEnforceHeightLimit = true;
    this->bEnableMainQuestList = true;
    this->bEnablePinnedQuestList = true;
    this->VisibleMissionCategories = 0;
    this->bSizeEstimateNeedsRefresh = false;
}

