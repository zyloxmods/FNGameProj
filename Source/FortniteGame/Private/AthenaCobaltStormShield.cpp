#include "AthenaCobaltStormShield.h"
#include "Net/UnrealNetwork.h"

void AAthenaCobaltStormShield::StormShieldShrinkTimerComplete() {
}

void AAthenaCobaltStormShield::OnRep_ClientStormShieldShrinkTimerValue() {
}

void AAthenaCobaltStormShield::ClientStormShieldShrinkTimerComplete() {
}

void AAthenaCobaltStormShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaCobaltStormShield, CachedMutator);
    DOREPLIFETIME(AAthenaCobaltStormShield, ClientStormShieldShrinkTimerValue);
}

AAthenaCobaltStormShield::AAthenaCobaltStormShield() {
    this->ShieldBoundarySound = NULL;
    this->LowpassAudioListenerRange = 1;
    this->LowpassAudioValueOutside = 1;
    this->LowpassAudioValueInside = 1;
    this->LowpassAudioInterpSpeed = 1;
    this->CachedMutator = NULL;
    this->ClientStormShieldShrinkTimerValue = 1;
    this->ShieldBoundaryAudio = NULL;
}

