#include "NightNightBase.h"
#include "Net/UnrealNetwork.h"

void ANightNightBase::ReturnToNight() {
}

void ANightNightBase::OnRep_PrepareClient() {
}

void ANightNightBase::MakePreparationsForNightNight() {
}

void ANightNightBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANightNightBase, bPrepareClient);
}

ANightNightBase::ANightNightBase() {
    bPrepareClient = false;
}

