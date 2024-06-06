#include "FortPartyRepData.h"

FFortPartyRepData::FFortPartyRepData() {
    PartyState = EFortPartyState::Undetermined;
    LobbyConnectionStarted = false;
    MatchmakingResult = EMatchmakingCompleteResult::NotStarted;
    MatchmakingState = EMatchmakingState::NotMatchmaking;
    SessionIsCriticalMission = false;
    ZoneTileIndex = 0;
    AllowJoinInProgress = false;
    AthenaSquadFill = false;
    PartyIsJoinedInProgress = false;
}

