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
    this->OldSmoothedProgress = 1;
    this->SmoothedProgress = 1;
    this->SmoothProgressTimer = 1;
    this->ProgressDecaySpeed = 1;
    this->ProgressReverseSpeed = 1;
    this->CurrentCaptureSpeed = 0;
    this->CaptureSpeedBoost = 1;
    this->CaptureSpeedBoostEmoting = 1;
    this->NeutralizingTime = 0;
    this->DeneutralizingSpeed = 0;
    this->CaptureTime = 1;
    this->CaptureTimeCurrent = 1;
    this->PreviousCaptureState = ECaptureState::Neutral;
    this->CapturingStateOwner = 0;
    this->NeutralizingStateOwner = 0;
    this->StateOwner = 0;
    this->CaptureState = ECaptureState::Neutral;
    this->CaptureProgress = 1;
    this->SmoothProgressState = ESmoothProgressState::Enabled;
}

