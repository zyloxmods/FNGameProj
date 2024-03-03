#include "FortMatchmakingV2.h"

UFortMatchmakingV2::UFortMatchmakingV2() {
    this->MMSVersionCompatability = TEXT("*");
    this->MMSTicketURLClient = TEXT("/api/game/v2/matchmakingservice/ticket/player/`id");
    this->MMSPingInterval = 1;
    this->bCustomKeyEnabled = false;
    this->UpdateCheckInterval = 1;
    this->bEnablePrivateMatchUpdateCheck = true;
    this->MatchmakingRetryInterval = 1;
    this->MaxMatchmakingRetries = 0;
    this->AltDomainRecords.AddDefaulted(8);
    this->LogSubmitChance = 1;
    this->bSubmitSecondaryLogs = false;
    this->LogTailKb = 0;
    this->WhitelistedPlaylistsForActiveCheck.AddDefaulted(1);
}

