#include "AthenaServerStartAircraftStats.h"

FAthenaServerStartAircraftStats::FAthenaServerStartAircraftStats() {
    this->WarmupDurationSec = 1;
    this->NumPlayersMissing = 0;
    this->NumPlayersQuitting = 0;
    this->bStartedEarly = false;
    this->StartReason = EAircraftLaunchReason::StdTimerAllPlayers;
    this->ExpectedPlayers = 0;
    this->PlayersReadied = 0;
    this->PlayersLoadingScreenDropped = 0;
}

