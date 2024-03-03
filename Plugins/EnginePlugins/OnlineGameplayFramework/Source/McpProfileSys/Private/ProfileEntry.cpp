#include "ProfileEntry.h"

FProfileEntry::FProfileEntry() {
    this->ProfileObject = NULL;
    this->bWaitingForRefreshAllProfilesResponse = false;
    this->bForwardUpdatesToClient = false;
}

