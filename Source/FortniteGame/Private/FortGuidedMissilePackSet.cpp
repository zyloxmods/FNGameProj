#include "FortGuidedMissilePackSet.h"
#include "Net/UnrealNetwork.h"

void UFortGuidedMissilePackSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGuidedMissilePackSet, MaxMissiles);
    DOREPLIFETIME(UFortGuidedMissilePackSet, Missiles);
    DOREPLIFETIME(UFortGuidedMissilePackSet, ReserveMaxMissiles);
    DOREPLIFETIME(UFortGuidedMissilePackSet, ReserveMissiles);
    DOREPLIFETIME(UFortGuidedMissilePackSet, ReloadDelay);
}

UFortGuidedMissilePackSet::UFortGuidedMissilePackSet() {
}

