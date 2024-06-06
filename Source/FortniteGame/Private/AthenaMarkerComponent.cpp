#include "AthenaMarkerComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UAthenaMarkerComponent::UnmarkActorOnClient(FMarkerID MarkerID) {
}

void UAthenaMarkerComponent::SetMarkerWidgetClass(TSubclassOf<UUserWidget> InMarkerClass) {
}

void UAthenaMarkerComponent::SetMarkerActorClass(TSubclassOf<AFortPlayerMarkerBase> InMarkerActorClass) {
}

void UAthenaMarkerComponent::ServerRemoveMapMarker_Implementation(FMarkerID MarkerID, ECancelMarkerReason CancelReason) {
}

void UAthenaMarkerComponent::ServerAddMapMarker_Implementation(FFortClientMarkerRequest MarkerRequest) {
}

void UAthenaMarkerComponent::OnTimelineScrubbed() {
}

FMarkerID UAthenaMarkerComponent::MarkActorOnClient(AActor* ActorToBeMarked, const bool bIncludeSquad, const bool bUseHoveredMarkerDetail) {
    return FMarkerID{};
}

UFortWorldMarker* UAthenaMarkerComponent::FindMarkerByID(FMarkerID MarkerID) {
    return NULL;
}

void UAthenaMarkerComponent::CancelAllMarkers() {
}

void UAthenaMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAthenaMarkerComponent, MarkerStream);
}

UAthenaMarkerComponent::UAthenaMarkerComponent() {
    MarkerWidgetClass = NULL;
    MarkerActorClass = NULL;
    LocalPlaceableMarkersPerRate = 0;
    RemotePlayableMarkerSoundsPerRate = 0;
    PendingCancelMarker = NULL;
    LastHoveredMarker = NULL;
    bIsAimingDownSights = false;
}

