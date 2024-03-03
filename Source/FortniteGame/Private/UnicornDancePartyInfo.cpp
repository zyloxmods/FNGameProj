#include "UnicornDancePartyInfo.h"

FUnicornDancePartyInfo::FUnicornDancePartyInfo() {
    this->StartTimestamp = 1;
    this->EndTimestamp = 1;
    this->PeakMembers = 0;
    this->PeakStartTimestamp = 1;
    this->PeakEndTimestamp = 1;
    this->bEndsBecauseOfUs = false;
    this->bIsMovingEmote = false;
}

