#include "FortChargingSet_Arsenic_Hurl.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_Arsenic_Hurl::OnRep_CurrentCharge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Arsenic_Hurl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Arsenic_Hurl, CurrentCharge);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Hurl, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Hurl, ChargeTime);
    DOREPLIFETIME(UFortChargingSet_Arsenic_Hurl, ServerTimeChargeIncrements);
}

UFortChargingSet_Arsenic_Hurl::UFortChargingSet_Arsenic_Hurl() {
}

