#include "FortChargingSet_SneakySnow.h"
#include "Net/UnrealNetwork.h"

void UFortChargingSet_SneakySnow::OnRep_Charge(const FFortGameplayAttributeData& OldValue) {
}

void UFortChargingSet_SneakySnow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortChargingSet_SneakySnow, Charge);
    DOREPLIFETIME(UFortChargingSet_SneakySnow, MaxCharge);
    DOREPLIFETIME(UFortChargingSet_SneakySnow, ChargeRate);
    DOREPLIFETIME(UFortChargingSet_SneakySnow, ServerTimeChargeIncrements);
}

UFortChargingSet_SneakySnow::UFortChargingSet_SneakySnow() {
}

