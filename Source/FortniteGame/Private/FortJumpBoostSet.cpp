#include "FortJumpBoostSet.h"
#include "Net/UnrealNetwork.h"

void UFortJumpBoostSet::OnRep_ReserveFuel(const FFortGameplayAttributeData& OldValue) {
}

void UFortJumpBoostSet::OnRep_Fuel(const FFortGameplayAttributeData& OldValue) {
}

void UFortJumpBoostSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortJumpBoostSet, BoostActive);
    DOREPLIFETIME(UFortJumpBoostSet, MaxFuel);
    DOREPLIFETIME(UFortJumpBoostSet, Fuel);
    DOREPLIFETIME(UFortJumpBoostSet, ReserveMaxFuel);
    DOREPLIFETIME(UFortJumpBoostSet, ReserveFuel);
    DOREPLIFETIME(UFortJumpBoostSet, FuelBurnRate);
    DOREPLIFETIME(UFortJumpBoostSet, FuelRegenRate);
    DOREPLIFETIME(UFortJumpBoostSet, FuelRegenDelay);
    DOREPLIFETIME(UFortJumpBoostSet, BoostFuelCost);
    DOREPLIFETIME(UFortJumpBoostSet, UpwardThrust);
    DOREPLIFETIME(UFortJumpBoostSet, LateralThrust);
    DOREPLIFETIME(UFortJumpBoostSet, UpwardAcceleration);
    DOREPLIFETIME(UFortJumpBoostSet, LateralAcceleration);
}

UFortJumpBoostSet::UFortJumpBoostSet() {
}

