#include "FortMediaPlayerCtrl.h"

void UFortMediaPlayerCtrl::SetPlayerStartTime(float InRequestSentTime) {
}

bool UFortMediaPlayerCtrl::Play() {
    return false;
}

bool UFortMediaPlayerCtrl::OpenSourceWithOptions(UMediaSource* InMediaSource, const FMediaPlayerOptions& InOptions) {
    return false;
}

UFortMediaPlayerCtrl::UFortMediaPlayerCtrl() {
    this->MediaPlayer = NULL;
    this->MediaSource = NULL;
    this->InitialBufferDurationInSeconds = 1;
    this->SegmentBufferDurationInSeconds = 1;
}

