#include "FortSpectatorBeaconClient.h"

void AFortSpectatorBeaconClient::ServerReconnectExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortSpectatorBeaconClient::ServerReconnectExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

void AFortSpectatorBeaconClient::ServerAbandonExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortSpectatorBeaconClient::ServerAbandonExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}



void AFortSpectatorBeaconClient::ClientAllowedToProceedFromReservationTimeout_Implementation() {
}

void AFortSpectatorBeaconClient::ClientAllowedToProceedFromReservation_Implementation() {
}


AFortSpectatorBeaconClient::AFortSpectatorBeaconClient() {
    ReconnectionInitialTimeout = 1;
    ReconnectionTimeout = 1;
    bHasReconnected = false;
}

