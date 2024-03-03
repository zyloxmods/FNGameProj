#include "FortChargingSet_ArsenicCore_Dash.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_ArsenicCore_Dash::OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_ArsenicCore_Dash::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Dash, CurrentCharge);
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Dash, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Dash, ChargeTime);
    DOREPLIFETIME(UFortChargingSet_ArsenicCore_Dash, ServerTimeChargeIncrements);
}

UFortChargingSet_ArsenicCore_Dash::UFortChargingSet_ArsenicCore_Dash() {
}

