#include "WaxPlayerDataEntry.h"

FWaxPlayerDataEntry::FWaxPlayerDataEntry() {
    this->PlayerState = NULL;
    this->bPermanentlyWaxed = false;
    this->bPlayerWasLeader = false;
    this->TokenBasedPlacement = 0;
    this->CurrentTokens = 0;
    this->PreviousTokens = 0;
    this->CurrentTeamTokens = 0;
    this->PreviousTeamTokens = 0;
    this->CurrentKills = 0;
    this->PreviousKills = 0;
    this->CurrentLives = 0;
}

