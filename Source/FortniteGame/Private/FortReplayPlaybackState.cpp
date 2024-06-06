#include "FortReplayPlaybackState.h"

FFortReplayPlaybackState::FFortReplayPlaybackState() {
    StartTime = 1;
    EndTime = 1;
    TimeNow = 1;
    bIsPaused = false;
    PlaybackSpeedMultiplier = 1;
    HUDVisibility = EHudVisibilityState::FullyVisible;
    bLevelStreaming = false;
    bHasRelevancyZone = false;
}

