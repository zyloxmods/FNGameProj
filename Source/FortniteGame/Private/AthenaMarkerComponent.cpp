#include "AthenaMarkerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UAthenaMarkerComponent::SetMarkerWidgetClass(TSubclassOf<UUserWidget> InMarkerClass) {
}

void UAthenaMarkerComponent::SetMarkerActorClass(TSubclassOf<AFortPlayerMarkerBase> InMarkerActorClass) {
}

void UAthenaMarkerComponent::ServerRemoveMapMarker_Implementation(FMarkerID MarkerID, ECancelMarkerReason CancelReason) {
}
bool UAthenaMarkerComponent::ServerRemoveMapMarker_Validate(FMarkerID MarkerID, ECancelMarkerReason CancelReason) {
    return true;
}

void UAthenaMarkerComponent::ServerAddMapMarker_Implementation(FFortClientMarkerRequest MarkerRequest) {
}
bool UAthenaMarkerComponent::ServerAddMapMarker_Validate(FFortClientMarkerRequest MarkerRequest) {
    return true;
}

void UAthenaMarkerComponent::OnTimelineScrubbed() {
}

void UAthenaMarkerComponent::OnRep_ReplayMarkers() {
}

void UAthenaMarkerComponent::ClientCancelMarker_Implementation(FMarkerID MarkerID) {
}

void UAthenaMarkerComponent::ClientAddMarker_Implementation(FFortWorldMarkerData MarkerData) {
}

void UAthenaMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAthenaMarkerComponent, ReplayMarkers);
}

UAthenaMarkerComponent::UAthenaMarkerComponent() {
    this->MarkerWidgetClass = NULL;
    this->MarkerActorClass = NULL;
    this->LocalPlaceableMarkersPerRate = 0;
    this->RemotePlayableMarkerSoundsPerRate = 0;
    this->PendingCancelMarker = NULL;
    this->LastHoveredMarker = NULL;
    this->bIsAimingDownSights = false;
}

