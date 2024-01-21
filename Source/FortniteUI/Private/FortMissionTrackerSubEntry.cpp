#include "FortMissionTrackerSubEntry.h"



void UFortMissionTrackerSubEntry::NotifyVisibilityChanged() {
}

UFortMissionTrackerSubEntry::UFortMissionTrackerSubEntry() {
    this->bConfigureAsHUD = true;
    this->bHiddenByHeightConstraint = false;
    this->TrackedObjective = NULL;
}

