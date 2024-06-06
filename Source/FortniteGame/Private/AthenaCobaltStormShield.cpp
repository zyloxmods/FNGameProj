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
    ShieldBoundarySound = NULL;
    LowpassAudioListenerRange = 1;
    LowpassAudioValueOutside = 1;
    LowpassAudioValueInside = 1;
    LowpassAudioInterpSpeed = 1;
    CachedMutator = NULL;
    ClientStormShieldShrinkTimerValue = 1;
    ShieldBoundaryAudio = NULL;
}

