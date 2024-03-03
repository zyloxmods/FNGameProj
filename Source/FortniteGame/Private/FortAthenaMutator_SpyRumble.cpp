#include "FortAthenaMutator_SpyRumble.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_SpyRumble::OnRep_NumKillsForNextPerkUnlock() {
}

void AFortAthenaMutator_SpyRumble::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SpyRumble, NumKillsForNextPerkUnlock);
}

AFortAthenaMutator_SpyRumble::AFortAthenaMutator_SpyRumble() {
    this->NumKillsForNextPerkUnlock = 0;
    this->KillCountCutOff = 0;
}

