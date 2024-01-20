#include "AthenaServerStartAircraftStats.h"

FAthenaServerStartAircraftStats::FAthenaServerStartAircraftStats() {
    this->WarmupDurationSec = 0.00f;
    this->NumPlayersMissing = 0;
    this->NumPlayersQuitting = 0;
    this->bStartedEarly = false;
    this->StartReason = EAircraftLaunchReason::StdTimerAllPlayers;
    this->ExpectedPlayers = 0;
    this->PlayersReadied = 0;
    this->PlayersLoadingScreenDropped = 0;
}

