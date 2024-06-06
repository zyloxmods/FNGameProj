#include "FortGameStateBase.h"
#include "Net/UnrealNetwork.h"

void AFortGameStateBase::OnRep_TimeOfDayManager() {
}

void AFortGameStateBase::OnRep_StormShield() {
}

AFortTimeOfDayManager* AFortGameStateBase::GetTimeOfDayManager() const {
    return NULL;
}

AFortMissionStormShield* AFortGameStateBase::GetStormShield() const {
    return NULL;
}

void AFortGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateBase, FortTimeOfDayManager);
    DOREPLIFETIME(AFortGameStateBase, StormShield);
}

AFortGameStateBase::AFortGameStateBase() {
    FortTimeOfDayManager = NULL;
    StormShield = NULL;
}

