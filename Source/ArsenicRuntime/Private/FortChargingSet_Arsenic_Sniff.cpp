#include "FortChargingSet_Arsenic_Sniff.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_Arsenic_Sniff::OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Arsenic_Sniff::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Arsenic_Sniff, CurrentCharge);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Sniff, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Sniff, ChargeTime);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Sniff, ServerTimeChargeIncrements);
}

UFortChargingSet_Arsenic_Sniff::UFortChargingSet_Arsenic_Sniff() {
}

