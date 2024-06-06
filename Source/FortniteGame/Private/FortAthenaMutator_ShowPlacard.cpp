#include "FortAthenaMutator_ShowPlacard.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_ShowPlacard::OnRep_ShowPlacardPhase() {
}

void AFortAthenaMutator_ShowPlacard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ShowPlacard, ShowPlacardPhase);
}

AFortAthenaMutator_ShowPlacard::AFortAthenaMutator_ShowPlacard() {
    ShowPlacardPhase = EShowPlacardPhase::None;
    WaitBeforeInitialFadeOutDuration = 1;
    FadeDuration = 1;
    ShowPlacardDuration = 1;
    ServerWaitsOnBlackScreenDuration = 1;
}

