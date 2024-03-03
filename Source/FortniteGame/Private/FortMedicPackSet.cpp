#include "FortMedicPackSet.h"
#include "Net/UnrealNetwork.h"

void UFortMedicPackSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMedicPackSet, MaxFuel);
    DOREPLIFETIME(UFortMedicPackSet, Fuel);
    DOREPLIFETIME(UFortMedicPackSet, ReserveMaxFuel);
    DOREPLIFETIME(UFortMedicPackSet, ReserveFuel);
    DOREPLIFETIME(UFortMedicPackSet, FuelBurnRate);
    DOREPLIFETIME(UFortMedicPackSet, FuelRegenRate);
    DOREPLIFETIME(UFortMedicPackSet, FuelRegenDelay);
    DOREPLIFETIME(UFortMedicPackSet, SelfReviveActive);
    DOREPLIFETIME(UFortMedicPackSet, SelfReviveTime);
    DOREPLIFETIME(UFortMedicPackSet, SelfReviveCost);
    DOREPLIFETIME(UFortMedicPackSet, DamageBreaksSelfRevive);
    DOREPLIFETIME(UFortMedicPackSet, Heal);
    DOREPLIFETIME(UFortMedicPackSet, HealRadius);
    DOREPLIFETIME(UFortMedicPackSet, HealPeriod);
}

UFortMedicPackSet::UFortMedicPackSet() {
}

