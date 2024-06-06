#include "FortAthenaMutator_PlayerHealthIndicator.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_PlayerHealthIndicator::OnRep_DisplayMode() {
}

void AFortAthenaMutator_PlayerHealthIndicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_PlayerHealthIndicator, DisplayMode);
}

AFortAthenaMutator_PlayerHealthIndicator::AFortAthenaMutator_PlayerHealthIndicator() {
    DisplayMode = EPlayerIndicatorDisplayMode::DontOverride;
}

