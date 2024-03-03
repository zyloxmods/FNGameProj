#include "FortChargingSet_Kaboom.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_Kaboom::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Kaboom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Kaboom, Charge);
    DOREPLIFETIME(UFortChargingSet_Kaboom, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Kaboom, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_Kaboom, ServerTimeChargeIncrements);
}

UFortChargingSet_Kaboom::UFortChargingSet_Kaboom() {
}

