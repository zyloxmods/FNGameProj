#include "CaptureComponent.h"
#include "Net/UnrealNetwork.h"

void UCaptureComponent::UpdateSmoothProgressStateByCaptureState() {
}

void UCaptureComponent::UpdateProgressReverseSpeed(int32 NumOfPlayers, int32 NumOfEmotingPlayers) {
}

void UCaptureComponent::UpdateCaptureSpeed(int32 NumOfPlayers, int32 NumOfEmotingPlayers) {
}

void UCaptureComponent::SetProgressDecaySpeed(float NewProgressDecaySpeed) {
}

void UCaptureComponent::SetNeutralizingTime(int32 NewNeutralizingSpeed) {
}

void UCaptureComponent::SetCaptureTime(float NewCaptureTime) {
}

void UCaptureComponent::SetCaptureState(ECaptureState NewCaptureState, uint8 TriggerTeamIndex) {
}

void UCaptureComponent::SetCaptureSpeedBoostEmoting(float NewCaptureSpeedBoostEmoting) {
}

void UCaptureComponent::SetCaptureSpeedBoost(float NewCaptureSpeedBoost) {
}

void UCaptureComponent::OnRep_SmoothProgressState() {
}

void UCaptureComponent::OnRep_CaptureState(ECaptureState OldCaptureState) {
}

void UCaptureComponent::OnRep_CaptureProgress() {
}

uint8 UCaptureComponent::GetCaptureStateOwner() const {
    return 0;
}

ECaptureState UCaptureComponent::GetCaptureState() const {
    return ECaptureState::Neutral;
}

void UCaptureComponent::ForceCaptureProgress(float NewCaptureProgress) {
}

void UCaptureComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCaptureComponent, StateOwner);
    DOREPLIFETIME(UCaptureComponent, CaptureState);
    DOREPLIFETIME(UCaptureComponent, CaptureProgress);
    DOREPLIFETIME(UCaptureComponent, SmoothProgressState);
}

UCaptureComponent::UCaptureComponent() {
    OldSmoothedProgress = 1;
    SmoothedProgress = 1;
    SmoothProgressTimer = 1;
    ProgressDecaySpeed = 1;
    ProgressReverseSpeed = 1;
    CurrentCaptureSpeed = 0;
    CaptureSpeedBoost = 1;
    CaptureSpeedBoostEmoting = 1;
    NeutralizingTime = 0;
    DeneutralizingSpeed = 0;
    CaptureTime = 1;
    CaptureTimeCurrent = 1;
    PreviousCaptureState = ECaptureState::Neutral;
    CapturingStateOwner = 0;
    NeutralizingStateOwner = 0;
    StateOwner = 0;
    CaptureState = ECaptureState::Neutral;
    CaptureProgress = 1;
    SmoothProgressState = ESmoothProgressState::Enabled;
}

