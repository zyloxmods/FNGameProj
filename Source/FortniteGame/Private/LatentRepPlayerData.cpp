#include "LatentRepPlayerData.h"

FLatentRepPlayerData::FLatentRepPlayerData() {
    PlayerState = NULL;
    LastPawnNotRelevantTime = 1;
    bPawnIsRelevant = false;
    bWasPawnRelevantLastUpdate = false;
    CurrentYaw = 1;
    LastLocationReplicationTime = 1;
    PrevLocationReplicatedTime = 1;
    LastYawReplicationTime = 1;
    PrevYawReplicatedTime = 1;
    LastRepYaw = 1;
    PrevRepYaw = 1;
    LerpStartYaw = 1;
    PawnStateMask = EFortPawnState::Default;
    CurrPawnStateMask = EFortPawnState::Default;
    CurieStateBitfield = 0;
}

