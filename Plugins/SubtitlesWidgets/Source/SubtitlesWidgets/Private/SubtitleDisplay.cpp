#include "SubtitleDisplay.h"

bool USubtitleDisplay::HasSubtitles() const {
    return false;
}

USubtitleDisplay::USubtitleDisplay() {
    this->Options = NULL;
    this->WrapTextAt = 1;
    this->bPreviewMode = false;
}

