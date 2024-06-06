#include "FortAthenaMutator_ShouldDestroyActorsOnPlacement.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_ShouldDestroyActorsOnPlacement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ShouldDestroyActorsOnPlacement, bShouldDestroyOnPlacement);
}

AFortAthenaMutator_ShouldDestroyActorsOnPlacement::AFortAthenaMutator_ShouldDestroyActorsOnPlacement() {
    bShouldDestroyOnPlacement = true;
}

