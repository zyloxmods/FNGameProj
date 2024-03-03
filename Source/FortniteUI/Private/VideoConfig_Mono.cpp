#include "VideoConfig_Mono.h"

FVideoConfig_Mono::FVideoConfig_Mono() {
    this->StreamingMediaSource = NULL;
    this->bIsAutoPlay = false;
    this->bForceAutoPlay = false;
    this->bStreamingEnabled = false;
    this->bShouldBeModal = false;
    this->bUseSkipBoundaries = false;
    this->bKairosPlayer = false;
    this->bHoldToSkip = false;
}

