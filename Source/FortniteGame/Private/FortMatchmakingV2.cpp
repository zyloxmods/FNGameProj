#include "FortMatchmakingV2.h"

UFortMatchmakingV2::UFortMatchmakingV2() {
    this->MMSVersionCompatability = TEXT("*");
    this->MMSTicketURLClient = TEXT("/api/game/v2/matchmakingservice/ticket/player/`id");
    this->MMSPingInterval = 30.00f;
    this->bCustomKeyEnabled = true;
    this->UpdateCheckInterval = 600.00f;
    this->bEnablePrivateMatchUpdateCheck = true;
    this->MatchmakingRetryInterval = 3.00f;
    this->MaxMatchmakingRetries = 3;
    this->AltDomainRecords.AddDefaulted(1);
    this->LogSubmitChance = 1.00f;
    this->LogTailKb = 300;
}

