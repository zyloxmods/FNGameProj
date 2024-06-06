#include "FortMatchmaking.h"
#include "FortPartyBeaconClient.h"

UFortMatchmaking::UFortMatchmaking() {
    ReservationBeaconClientClass = AFortPartyBeaconClient::StaticClass();
    ReservationBeaconClient = NULL;
    LobbyBeaconClient = NULL;
    ControllerId = 0;
    Matchmaking = NULL;
    LastMatchmakingPrivacyConfiguration = EFortMatchmakingPrivacyConfiguration::UserPartyConfigured;
}

