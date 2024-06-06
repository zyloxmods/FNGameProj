#include "FortAthenaMutator_SynchronizedTeleport.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_SynchronizedTeleport::OnRep_TeleportComplete() {
}

void AFortAthenaMutator_SynchronizedTeleport::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SynchronizedTeleport, bTeleportComplete);
}

AFortAthenaMutator_SynchronizedTeleport::AFortAthenaMutator_SynchronizedTeleport() {
    HidePawnGameplayEffectClass = NULL;
    bTeleportComplete = true;
}

