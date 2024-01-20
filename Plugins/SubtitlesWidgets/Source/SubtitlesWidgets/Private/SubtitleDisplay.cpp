#include "SubtitleDisplay.h"

bool USubtitleDisplay::HasSubtitles() const {
    return false;
}

USubtitleDisplay::USubtitleDisplay() {
    this->WrapTextAt = 0.00f;
}

