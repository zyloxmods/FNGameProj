#include "FortQuestMapEventCallout.h"

bool UFortQuestMapEventCallout::IsQuestClaimPending(bool bActiveEvent) const {
    return false;
}

bool UFortQuestMapEventCallout::IsNavigationPossible(const ECalloutNavigationDirection Direction) const {
    return false;
}

bool UFortQuestMapEventCallout::IsCurrentEventNew() const {
    return false;
}

bool UFortQuestMapEventCallout::IsArrowNewBangEnabled() const {
    return false;
}



void UFortQuestMapEventCallout::HandleCurrentEventIndexSeen() {
}

void UFortQuestMapEventCallout::HandleCalloutNavigation(const ECalloutNavigationDirection Direction) {
}

int32 UFortQuestMapEventCallout::GetEventDataIndex() const {
    return 0;
}

int32 UFortQuestMapEventCallout::GetEventCount() const {
    return 0;
}

FFortEventQuestMapDataEntry UFortQuestMapEventCallout::GetCurrentEventDataEntry() const {
    return FFortEventQuestMapDataEntry{};
}

bool UFortQuestMapEventCallout::GetBangEnabledForDirection(const ECalloutNavigationDirection Direction) const {
    return false;
}

UFortQuestMapEventCallout::UFortQuestMapEventCallout() {
}

