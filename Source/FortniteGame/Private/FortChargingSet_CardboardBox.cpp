#include "FortChargingSet_CardboardBox.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_CardboardBox::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_CardboardBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_CardboardBox, Charge);
    DOREPLIFETIME(UFortChargingSet_CardboardBox, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_CardboardBox, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_CardboardBox, ServerTimeChargeIncrements);
}

UFortChargingSet_CardboardBox::UFortChargingSet_CardboardBox() {
}

