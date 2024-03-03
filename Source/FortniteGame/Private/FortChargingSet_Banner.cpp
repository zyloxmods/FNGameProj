#include "FortChargingSet_Banner.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_Banner::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_Banner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_Banner, Charge);
    DOREPLIFETIME(UFortChargingSet_Banner, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_Banner, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_Banner, ServerTimeChargeIncrements);
}

UFortChargingSet_Banner::UFortChargingSet_Banner() {
}

