#include "FortMissionTrackerEntry.h"

void UFortMissionTrackerEntry::UpdateVisibility() {
}


void UFortMissionTrackerEntry::HandleObjectivesChanged() {
}

void UFortMissionTrackerEntry::HandleMissionInfoSet() {
}

UFortMissionTrackerEntry::UFortMissionTrackerEntry() {
    this->SubEntryClass = NULL;
    this->bConfigureAsHUD = true;
    this->bHiddenByHeightConstraint = false;
    this->MissionNameText = NULL;
    this->ObjectivesListBox = NULL;
    this->UpperSeparator = NULL;
    this->TrackedMission = NULL;
}

