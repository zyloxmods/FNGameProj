#include "WaxPlayerDataEntry.h"

FWaxPlayerDataEntry::FWaxPlayerDataEntry() {
    PlayerState = NULL;
    bPermanentlyWaxed = false;
    bPlayerWasLeader = false;
    TokenBasedPlacement = 0;
    CurrentTokens = 0;
    PreviousTokens = 0;
    CurrentTeamTokens = 0;
    PreviousTeamTokens = 0;
    CurrentKills = 0;
    PreviousKills = 0;
    CurrentLives = 0;
}

