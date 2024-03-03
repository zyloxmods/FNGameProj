#include "SubtitleFormat.h"

FSubtitleFormat::FSubtitleFormat() {
    this->SubtitleTextSize = ESubtitleDisplayTextSize::ExtraSmall;
    this->SubtitleTextColor = ESubtitleDisplayTextColor::White;
    this->SubtitleTextBorder = ESubtitleDisplayTextBorder::None;
    this->SubtitleBackgroundOpacity = ESubtitleDisplayBackgroundOpacity::Clear;
}

