#include "NitrogenPlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UNitrogenPlayerComponent::OnRep_FareInteractionData() {
}

void UNitrogenPlayerComponent::OnRep_FareDataRepActor() {
}

void UNitrogenPlayerComponent::OnRep_CachedMutator() {
}

void UNitrogenPlayerComponent::OnNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase) {
}


void UNitrogenPlayerComponent::OnExitVehicle() {
}

void UNitrogenPlayerComponent::OnEnterVehiclePassenger() {
}

void UNitrogenPlayerComponent::OnEnterVehicleDriver() {
}

void UNitrogenPlayerComponent::HandleVehicleDestroyedBuildingActor(AFortAthenaVehicle* Vehicle, ABuildingActor* BuildingActor) {
}

float UNitrogenPlayerComponent::GetDistanceFromDropOff() const {
    return 0.0f;
}

float UNitrogenPlayerComponent::GetDistanceFromClosestPassenger() const {
    return 0.0f;
}

void UNitrogenPlayerComponent::ClientHandleLoadingScreenStateChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText) {
}

void UNitrogenPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNitrogenPlayerComponent, CachedMutator);
    DOREPLIFETIME(UNitrogenPlayerComponent, FareInteractionData);
    DOREPLIFETIME(UNitrogenPlayerComponent, FareDataRepActor);
}

UNitrogenPlayerComponent::UNitrogenPlayerComponent() {
    this->CurrentFareWidgetActor = NULL;
    this->LoadingScreenSoundSuppressionSoundMix = NULL;
    this->OverrideIndicatorImage = EIndicatorStateImage::Default;
    this->NearestVehicleWidget = NULL;
    this->CurrentRespawnSquadStart = NULL;
    this->PreviousFare = NULL;
    this->FareDataRepActor = NULL;
}

