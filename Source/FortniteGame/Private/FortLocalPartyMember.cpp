#include "FortLocalPartyMember.h"

void UFortLocalPartyMember::HandlePlayerControllerSet() {
}

void UFortLocalPartyMember::HandleNumAthenaPlayersLeftChanged(int32 NumPlayersLeft) {
}

void UFortLocalPartyMember::HandleMcpProfilesIntialized() {
}

UFortLocalPartyMember::UFortLocalPartyMember() {
    this->NumAthenaPlayersLeftDeltaThreshold = 5;
    this->AthenaPlayersLeftUpdateDelay = 5.00f;
}

