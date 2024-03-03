#include "FortGameSession.h"
#include "FortPartyBeaconHost.h"
#include "FortSpectatorBeaconHost.h"

void AFortGameSession::DumpReservations() const {
}

AFortGameSession::AFortGameSession() {
    this->ReservationBeaconHostClass = AFortPartyBeaconHost::StaticClass();
    this->SpectatorBeaconHostClass = AFortSpectatorBeaconHost::StaticClass();
    this->ReservationBeaconHost = NULL;
    this->LobbyBeaconHost = NULL;
    this->SpectatorBeaconHost = NULL;
    this->ContentBeaconHost = NULL;
    this->BulkUnregisterTimerDelay = 1;
    this->MaxBroadcasters = 0;
    this->DisconnectedReservationTimeout = 1;
    this->bShouldServerForcePartnerId = false;
    this->bEnableMeshNetwork = true;
    this->MeshBeaconHost = NULL;
    this->MeshBeaconHostObject = NULL;
    this->MeshBeaconClient = NULL;
    this->RetryMeshConnectDelay = 1;
    this->MaxMeshConnectDelay = 1;
    this->MeshNetworkServerStatusEventRate = 1;
}

