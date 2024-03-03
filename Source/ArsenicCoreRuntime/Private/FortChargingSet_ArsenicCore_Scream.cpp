#include "FortChargingSet_ArsenicCore_Scream.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_ArsenicCore_Scream::OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_ArsenicCore_Scream::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Scream, CurrentCharge);
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Scream, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Scream, ChargeTime);
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Scream, ServerTimeChargeIncrements);
}

UFortChargingSet_ArsenicCore_Scream::UFortChargingSet_ArsenicCore_Scream() {
}

