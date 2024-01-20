#include "FortMatchmaking.h"
#include "FortPartyBeaconClient.h"

UFortMatchmaking::UFortMatchmaking() {
    this->ReservationBeaconClientClass = AFortPartyBeaconClient::StaticClass();
    this->ReservationBeaconClient = NULL;
    this->LobbyBeaconClient = NULL;
    this->ControllerId = 0;
    this->Matchmaking = NULL;
    this->LastMatchmakingPrivacyConfiguration = EFortMatchmakingPrivacyConfiguration::UserPartyConfigured;
}

