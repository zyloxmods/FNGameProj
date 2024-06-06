#include "FortPartyBeaconClient.h"

void AFortPartyBeaconClient::ServerReconnectExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortPartyBeaconClient::ServerReconnectExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

void AFortPartyBeaconClient::ServerEmptyServerReservationRequest_Implementation(const FString& InSessionId, const FEmptyServerReservation ReservationData, FPartyReservation Reservation) {
}
bool AFortPartyBeaconClient::ServerEmptyServerReservationRequest_Validate(const FString& InSessionId, const FEmptyServerReservation ReservationData, FPartyReservation Reservation) {
    return true;
}

void AFortPartyBeaconClient::ServerAbandonExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortPartyBeaconClient::ServerAbandonExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

//void AFortPartyBeaconClient::ClientReconnectResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
//}

void AFortPartyBeaconClient::ClientAllowedToProceedFromReservationTimeout_Implementation() {
}

void AFortPartyBeaconClient::ClientAllowedToProceedFromReservation_Implementation() {
}

//void AFortPartyBeaconClient::ClientAbandonResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
//}

AFortPartyBeaconClient::AFortPartyBeaconClient() {
    ReconnectionInitialTimeout = 1;
    ReconnectionTimeout = 1;
    bHasReconnected = false;
}

