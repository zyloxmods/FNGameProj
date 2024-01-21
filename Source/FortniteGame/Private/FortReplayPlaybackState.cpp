#include "FortReplayPlaybackState.h"

FFortReplayPlaybackState::FFortReplayPlaybackState() {
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->TimeNow = 0.00f;
    this->bIsPaused = false;
    this->PlaybackSpeedMultiplier = 0.00f;
    this->bTimelineHasInputFocus = false;
    this->HUDVisibility = EHudVisibilityState::FullyVisible;
    this->bLevelStreaming = false;
    this->bHasRelevancyZone = false;
}

