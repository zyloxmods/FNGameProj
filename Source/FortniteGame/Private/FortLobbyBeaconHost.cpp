#include "FortLobbyBeaconHost.h"

AFortLobbyBeaconHost::AFortLobbyBeaconHost() {
    this->bAllowReservationsToProceedToLobby = false;
    this->bWorldRecordLoaded = false;
    this->LastReservationCountForPermissionTimeoutChange = 0;
    this->LobbyPermissionTimeout = 0.00f;
}

