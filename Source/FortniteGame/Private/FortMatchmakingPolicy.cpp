#include "FortMatchmakingPolicy.h"

UFortMatchmakingPolicy::UFortMatchmakingPolicy() {
    bMatchmakingInProgress = false;
    MMPass = NULL;
    ChanceToHostAttempt = 0;
    bShouldCampaignForceCrossplayConfig = true;
}

