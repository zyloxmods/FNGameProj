#include "FortRegenHealthSet.h"
#include "Net/UnrealNetwork.h"

void UFortRegenHealthSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortRegenHealthSet, HealthRegenRate);
    DOREPLIFETIME(UFortRegenHealthSet, HealthRegenDelay);
    DOREPLIFETIME(UFortRegenHealthSet, HealthRegenThreshold);
    DOREPLIFETIME(UFortRegenHealthSet, ShieldRegenRate);
    DOREPLIFETIME(UFortRegenHealthSet, ShieldRegenDelay);
    DOREPLIFETIME(UFortRegenHealthSet, ShieldRegenThreshold);
}

UFortRegenHealthSet::UFortRegenHealthSet() {
}

