#include "FortChargingSet_Scanner.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_Scanner::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Scanner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Scanner, Charge);
    DOREPLIFETIME(UFortChargingSet_Scanner, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Scanner, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_Scanner, ServerTimeChargeIncrements);
}

UFortChargingSet_Scanner::UFortChargingSet_Scanner() {
}

