#include "FortMissionTrackerList.h"

void UFortMissionTrackerList::UpdateVisibility() {
}

void UFortMissionTrackerList::HandleSizeEstimateChanged(UObject* ChangedElement) {
}

void UFortMissionTrackerList::HandleMissionsUpdated() {
}

UFortMissionTrackerList::UFortMissionTrackerList() {
    this->MissionEntryClass = NULL;
    this->bConfigureAsHUD = true;
    this->MissionsListBox = NULL;
}

