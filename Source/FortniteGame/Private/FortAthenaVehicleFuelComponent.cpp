#include "FortAthenaVehicleFuelComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAthenaVehicleFuelComponent::OnRep_ServerFuel(float PreviousFuel) {
}

void UFortAthenaVehicleFuelComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaVehicleFuelComponent, ServerFuel);
}

UFortAthenaVehicleFuelComponent::UFortAthenaVehicleFuelComponent() {
    this->bShouldInitializeWithStartingFuel = true;
    this->OwnerVehicle = NULL;
    this->ServerFuel = 1;
    this->OutOfFuelSound = NULL;
    this->LowFuelSound = NULL;
    this->LowFuelRepeatingPing = NULL;
}

