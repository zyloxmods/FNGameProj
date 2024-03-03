#include "FortChargingSet_HealGun.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_HealGun::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_HealGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_HealGun, Charge);
    DOREPLIFETIME(UFortChargingSet_HealGun, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_HealGun, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_HealGun, ServerTimeChargeIncrements);
}

UFortChargingSet_HealGun::UFortChargingSet_HealGun() {
}

