#include "LatentRepPlayerData.h"

FLatentRepPlayerData::FLatentRepPlayerData() {
    this->PlayerState = NULL;
    this->LastPawnNotRelevantTime = 1;
    this->bPawnIsRelevant = false;
    this->bWasPawnRelevantLastUpdate = false;
    this->CurrentYaw = 1;
    this->LastLocationReplicationTime = 1;
    this->PrevLocationReplicatedTime = 1;
    this->LastYawReplicationTime = 1;
    this->PrevYawReplicatedTime = 1;
    this->LastRepYaw = 1;
    this->PrevRepYaw = 1;
    this->LerpStartYaw = 1;
    this->PawnStateMask = EFortPawnState::Default;
    this->CurrPawnStateMask = EFortPawnState::Default;
    this->CurieStateBitfield = 0;
}

