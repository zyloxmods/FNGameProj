#include "FortChargingSet_AirbagSuit.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_AirbagSuit::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_AirbagSuit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_AirbagSuit, Charge);
    DOREPLIFETIME(UFortChargingSet_AirbagSuit, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_AirbagSuit, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_AirbagSuit, ServerTimeChargeIncrements);
}

UFortChargingSet_AirbagSuit::UFortChargingSet_AirbagSuit() {
}

