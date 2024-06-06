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
    MediaPlayer = NULL;
    MediaSource = NULL;
    InitialBufferDurationInSeconds = 1;
    SegmentBufferDurationInSeconds = 1;
}

