#include "NitrogenFare.h"
#include "Net/UnrealNetwork.h"

void ANitrogenFare::PickUpPointOverlapped(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState) {
}

void ANitrogenFare::PickUpPointExited(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState) {
}

void ANitrogenFare::OnVehicleEndPlay(AActor* DestroyedVehicle, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void ANitrogenFare::OnVehicleDriverChanged(const AFortPlayerControllerAthena* NewDriver, AFortAthenaVehicle* Vehicle) {
}

void ANitrogenFare::OnVehicleDestroyed(AFortDagwoodVehicle* DestroyedVehicle) {
}

void ANitrogenFare::OnRep_PassengerPickedUp() {
}

int32 ANitrogenFare::GetRewardValue() const {
    return 0;
}

void ANitrogenFare::DropOffPointOverlapped(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState) {
}

void ANitrogenFare::DropOffPointExited(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState) {
}

void ANitrogenFare::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANitrogenFare, Passenger);
    DOREPLIFETIME(ANitrogenFare, PickUpPoint);
    DOREPLIFETIME(ANitrogenFare, DropOffPoint);
    DOREPLIFETIME(ANitrogenFare, DropOffPointLocation);
    DOREPLIFETIME(ANitrogenFare, RewardValue);
    DOREPLIFETIME(ANitrogenFare, FastDeliveryTime);
    DOREPLIFETIME(ANitrogenFare, bPassengerPickedUp);
}

ANitrogenFare::ANitrogenFare() {
    this->Passenger = NULL;
    this->PickUpPoint = NULL;
    this->DropOffPoint = NULL;
    this->PassengerSpawnerDataClass = NULL;
    this->NitrogenPassengerPawnComponentClass = NULL;
    this->PassengerSeatIndex = 0;
    this->RewardValue = 0;
    this->FastDeliveryTime = 1;
    this->FastDeliveryBonusPoints = 0;
    this->DistanceThresholdIndex = 0;
    this->FareGenerationMethod = EFareGenerationMethod::Distance;
    this->AssignedPlayerState = NULL;
    this->PreviousPlayerState = NULL;
    this->bPassengerPickedUp = false;
}

