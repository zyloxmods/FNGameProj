#include "FortAttributeSet_VehicleFuel.h"
#include "Net/UnrealNetwork.h"

void UFortAttributeSet_VehicleFuel::OnRep_Fuel(const FFortGameplayAttributeData& OldValue) {
}

void UFortAttributeSet_VehicleFuel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, Fuel);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, FuelTankCapacity);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, FuelPerSecondIdle);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, FuelPerSecondDriving);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, FuelPerSecondBoosting);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, FuelPerSecondLeaking);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, MinFuelAtSpawn);
    DOREPLIFETIME(UFortAttributeSet_VehicleFuel, MaxFuelAtSpawn);
}

UFortAttributeSet_VehicleFuel::UFortAttributeSet_VehicleFuel() {
}

