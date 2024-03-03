#include "FortReplayPlaybackState.h"

FFortReplayPlaybackState::FFortReplayPlaybackState() {
    this->StartTime = 1;
    this->EndTime = 1;
    this->TimeNow = 1;
    this->bIsPaused = false;
    this->PlaybackSpeedMultiplier = 1;
    this->HUDVisibility = EHudVisibilityState::FullyVisible;
    this->bLevelStreaming = false;
    this->bHasRelevancyZone = false;
}

