#include "AthenaServerStartAircraftStats.h"

FAthenaServerStartAircraftStats::FAthenaServerStartAircraftStats() {
    WarmupDurationSec = 1;
    NumPlayersMissing = 0;
    NumPlayersQuitting = 0;
    bStartedEarly = false;
    StartReason = EAircraftLaunchReason::StdTimerAllPlayers;
    ExpectedPlayers = 0;
    PlayersReadied = 0;
    PlayersLoadingScreenDropped = 0;
}

