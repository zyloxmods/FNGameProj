#include "LatentRepPlayerData.h"

FLatentRepPlayerData::FLatentRepPlayerData() {
    this->PlayerState = NULL;
    this->LastPawnNotRelevantTime = 0.00f;
    this->bPawnIsRelevant = false;
    this->bWasPawnRelevantLastUpdate = false;
    this->CurrentYaw = 0.00f;
    this->LastLocationReplicationTime = 0.00f;
    this->PrevLocationReplicatedTime = 0.00f;
    this->LastYawReplicationTime = 0.00f;
    this->PrevYawReplicatedTime = 0.00f;
    this->LastRepYaw = 0.00f;
    this->PrevRepYaw = 0.00f;
    this->LerpStartYaw = 0.00f;
    this->PawnStateMask = EFortPawnState::Default;
    this->CurrPawnStateMask = EFortPawnState::Default;
}

