#include "NitrogenPassengerPawnComponent.h"
#include "Net/UnrealNetwork.h"

void UNitrogenPassengerPawnComponent::OnRep_PassengerState() {
}

void UNitrogenPassengerPawnComponent::OnRep_FareValueIndicator() {
}


void UNitrogenPassengerPawnComponent::ClientHandleFinishedCharacterCustomization(AFortPlayerPawn* PlayerPawn) {
}

void UNitrogenPassengerPawnComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UNitrogenPassengerPawnComponent, FareValueIndicator);
    DOREPLIFETIME(UNitrogenPassengerPawnComponent, PassengerState);
}

UNitrogenPassengerPawnComponent::UNitrogenPassengerPawnComponent() {
    this->FareValueIndicatorClass = NULL;
    this->FareValueIndicator = NULL;
    this->PassengerState = ENitrogenPassengerState::None;
}

