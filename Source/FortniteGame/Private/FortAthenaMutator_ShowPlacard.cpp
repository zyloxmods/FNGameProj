#include "FortAthenaMutator_ShowPlacard.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_ShowPlacard::OnRep_ShowPlacardPhase() {
}

void AFortAthenaMutator_ShowPlacard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ShowPlacard, ShowPlacardPhase);
}

AFortAthenaMutator_ShowPlacard::AFortAthenaMutator_ShowPlacard() {
    this->ShowPlacardPhase = EShowPlacardPhase::None;
    this->WaitBeforeInitialFadeOutDuration = 1;
    this->FadeDuration = 1;
    this->ShowPlacardDuration = 1;
    this->ServerWaitsOnBlackScreenDuration = 1;
}

