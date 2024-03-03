#include "StreamingRadioSourceData.h"

FStreamingRadioSourceData::FStreamingRadioSourceData() {
    this->State = EStreamingRadioSourceState::None;
    this->PlayingIndex = 0;
    this->FadeoutSeconds = 1;
    this->SourceOverride = NULL;
}

