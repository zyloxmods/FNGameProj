#include "FortAthenaMutator_ConsumePickups.h"
#include "FortControllerComponent_ConsumePickups.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_ConsumePickups::OnRep_ManagerObject() {
}

void AFortAthenaMutator_ConsumePickups::OnAllGameplayModifiersRegistered() {
}

void AFortAthenaMutator_ConsumePickups::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ConsumePickups, ManagerObject);
}

