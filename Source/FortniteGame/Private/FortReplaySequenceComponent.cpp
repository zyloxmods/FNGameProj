#include "FortReplaySequenceComponent.h"

void UFortReplaySequenceComponent::RestartSequence() {
}

void UFortReplaySequenceComponent::PreviousShot() {
}

void UFortReplaySequenceComponent::OnVideoFinished(bool bSuccess, const FString& Video) {
}

void UFortReplaySequenceComponent::OnReplayLevelStreamingChanged(bool bIsStreaming) {
}

void UFortReplaySequenceComponent::OnPlaybackTimeChanged(float NowTime) {
}

void UFortReplaySequenceComponent::NextShot() {
}

int32 UFortReplaySequenceComponent::GetNumberOfShotsInSequence() const {
    return 0;
}

int32 UFortReplaySequenceComponent::GetCurrentShotIndex() const {
    return 0;
}

void UFortReplaySequenceComponent::EditorVideoFinishedCallback() {
}

UFortReplaySequenceComponent::UFortReplaySequenceComponent() {
    this->CurrentShotIdx = -1;
    this->ReplayContext = NULL;
}

