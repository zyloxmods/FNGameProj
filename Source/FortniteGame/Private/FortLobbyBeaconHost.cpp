#include "FortLobbyBeaconHost.h"

AFortLobbyBeaconHost::AFortLobbyBeaconHost() {
    bAllowReservationsToProceedToLobby = false;
    bWorldRecordLoaded = false;
    LastReservationCountForPermissionTimeoutChange = 0;
    LobbyPermissionTimeout = 1;
}

