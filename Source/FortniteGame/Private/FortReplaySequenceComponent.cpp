#include "FortReplaySequenceComponent.h"

void UFortReplaySequenceComponent::RestartSequence() {
}

void UFortReplaySequenceComponent::PreviousShot() {
}

void UFortReplaySequenceComponent::OnVideoExportFinished(bool bSuccess, const FString& Video) {
}

void UFortReplaySequenceComponent::OnReplayLevelStreamingChanged(bool bIsStreaming) {
}

void UFortReplaySequenceComponent::OnPlaybackTimeChanged(float NowTime) {
}

void UFortReplaySequenceComponent::NoRecorderVideoFinishedCallback() {
}

void UFortReplaySequenceComponent::NextShot() {
}

int32 UFortReplaySequenceComponent::GetNumberOfShotsInSequence() const {
    return 0;
}

int32 UFortReplaySequenceComponent::GetCurrentShotIndex() const {
    return 0;
}

UFortReplaySequenceComponent::UFortReplaySequenceComponent() {
    CurrentShotIdx = 0;
    ReplayContext = NULL;
}

