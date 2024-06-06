#include "FortLocalPartyMember.h"

void UFortLocalPartyMember::HandlePlayerControllerSet() {
}

void UFortLocalPartyMember::HandleNumAthenaPlayersLeftChanged(int32 NumPlayersLeft) {
}

void UFortLocalPartyMember::HandleMcpProfilesInitialized() {
}

UFortLocalPartyMember::UFortLocalPartyMember() {
    NumAthenaPlayersLeftDeltaThreshold = 5;
    AthenaPlayersLeftUpdateDelay = 1;
}

