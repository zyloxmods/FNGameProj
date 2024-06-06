#include "FortGameSession.h"
#include "FortPartyBeaconHost.h"
#include "FortSpectatorBeaconHost.h"

void AFortGameSession::DumpReservations() const {
}

AFortGameSession::AFortGameSession() {
    ReservationBeaconHostClass = AFortPartyBeaconHost::StaticClass();
    SpectatorBeaconHostClass = AFortSpectatorBeaconHost::StaticClass();
    ReservationBeaconHost = NULL;
    LobbyBeaconHost = NULL;
    SpectatorBeaconHost = NULL;
    ContentBeaconHost = NULL;
    BulkUnregisterTimerDelay = 1;
    MaxBroadcasters = 0;
    DisconnectedReservationTimeout = 1;
    bShouldServerForcePartnerId = false;
    bEnableMeshNetwork = true;
    MeshBeaconHost = NULL;
    MeshBeaconHostObject = NULL;
    MeshBeaconClient = NULL;
    RetryMeshConnectDelay = 1;
    MaxMeshConnectDelay = 1;
    MeshNetworkServerStatusEventRate = 1;
}

