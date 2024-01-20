#include "FortPartyBeaconClient.h"

void AFortPartyBeaconClient::ServerReconnectExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortPartyBeaconClient::ServerReconnectExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}
/*
void AFortPartyBeaconClient::ServerEmptyServerReservationRequest_Implementation(const FString& InSessionId, const FEmptyServerReservation ReservationData, FPartyReservation Reservation) {
}
bool AFortPartyBeaconClient::ServerEmptyServerReservationRequest_Validate(const FString& InSessionId, const FEmptyServerReservation ReservationData, FPartyReservation Reservation) {
    return true;
}*/

void AFortPartyBeaconClient::ServerAbandonExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortPartyBeaconClient::ServerAbandonExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}
/*
void AFortPartyBeaconClient::ClientReconnectResponse_Implementation(EPartyReservationResult ReservationResponse) {
}*/

void AFortPartyBeaconClient::ClientAllowedToProceedFromReservationTimeout_Implementation() {
}

void AFortPartyBeaconClient::ClientAllowedToProceedFromReservation_Implementation() {
}
/*
void AFortPartyBeaconClient::ClientAbandonResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
}*/

AFortPartyBeaconClient::AFortPartyBeaconClient() {
    this->ReconnectionInitialTimeout = 100.00f;
    this->ReconnectionTimeout = 52.00f;
    this->bHasReconnected = false;
}

