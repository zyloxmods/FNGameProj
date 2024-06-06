#include "FortGameplayMutator.h"
#include "Net/UnrealNetwork.h"

void AFortGameplayMutator::SetMutatorActive(bool bEnable) {
}

void AFortGameplayMutator::OnRep_bMutatorActive() {
}

bool AFortGameplayMutator::IsMutatorActive() const {
    return false;
}


void AFortGameplayMutator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameplayMutator, bMutatorActive);
}

AFortGameplayMutator::AFortGameplayMutator() {
    bMutatorActive = false;
    bNetworkDormantWhenDeactivated = false;
}

