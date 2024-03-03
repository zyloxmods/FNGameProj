#include "FortChargingSet_Arsenic_Scream.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_Arsenic_Scream::OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Arsenic_Scream::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Arsenic_Scream, CurrentCharge);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Scream, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Scream, ChargeTime);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Scream, ServerTimeChargeIncrements);
}

UFortChargingSet_Arsenic_Scream::UFortChargingSet_Arsenic_Scream() {
}

