#include "FortAthenaVehicleFuelComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAthenaVehicleFuelComponent::OnRep_ServerFuel(float PreviousFuel) {
}

void UFortAthenaVehicleFuelComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaVehicleFuelComponent, ServerFuel);
}

UFortAthenaVehicleFuelComponent::UFortAthenaVehicleFuelComponent() {
    bShouldInitializeWithStartingFuel = true;
    OwnerVehicle = NULL;
    ServerFuel = 1;
    OutOfFuelSound = NULL;
    LowFuelSound = NULL;
    LowFuelRepeatingPing = NULL;
}

