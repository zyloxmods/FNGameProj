#include "FortPowerTripAttributeSet.h"
#include "Net/UnrealNetwork.h"

void UFortPowerTripAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPowerTripAttributeSet, Power);
    DOREPLIFETIME(UFortPowerTripAttributeSet, MaxPower);
}

UFortPowerTripAttributeSet::UFortPowerTripAttributeSet() {
}

