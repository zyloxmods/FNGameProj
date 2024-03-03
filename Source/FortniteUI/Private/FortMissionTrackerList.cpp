#include "FortMissionTrackerList.h"

void UFortMissionTrackerList::UpdateVisibleMissionCategories(int32 InVisibleMissionCategories) {
}

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
    this->SecondaryMissionsListBox = NULL;
    this->VisibleMissionCategories = 0;
}

