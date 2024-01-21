#include "FortGameSession.h"
#include "FortPartyBeaconHost.h"
//#include "FortSpectatorBeaconHost.h"

void AFortGameSession::DumpReservations() const {
}

AFortGameSession::AFortGameSession() {
    this->ReservationBeaconHostClass = AFortPartyBeaconHost::StaticClass();
  //  this->SpectatorBeaconHostClass = AFortSpectatorBeaconHost::StaticClass();
    this->ReservationBeaconHost = NULL;
    this->LobbyBeaconHost = NULL;
 //   this->SpectatorBeaconHost = NULL;
    this->BulkUnregisterTimerDelay = 60.00f;
    this->MaxBroadcasters = 2;
    this->DisconnectedReservationTimeout = 300.00f;
    this->bShouldServerForcePartnerId = false;
    this->bEnableMeshNetwork = false;
    this->MeshBeaconHost = NULL;
    this->MeshBeaconHostObject = NULL;
    this->MeshBeaconClient = NULL;
    this->RetryMeshConnectDelay = 10.00f;
    this->MaxMeshConnectDelay = 120.00f;
    this->MeshNetworkServerStatusEventRate = 60.00f;
}

