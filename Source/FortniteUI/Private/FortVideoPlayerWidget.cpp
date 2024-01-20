#include "FortVideoPlayerWidget.h"

void UFortVideoPlayerWidget::DynamicHandleOnOpenMediaFailed(const FString& FailedUrl) {
}

void UFortVideoPlayerWidget::DynamicHandleOnMediaOpened(const FString& OpenedUrl) {
}

UFortVideoPlayerWidget::UFortVideoPlayerWidget() {
    this->bAutoPlayOnOpen = false;
    this->bLoop = false;
    this->bShowSubtitles = false;
    this->bNoAudio = false;
    this->VideoPlayer = NULL;
    this->SoundComponent = NULL;
    this->SubtitlePlayer = NULL;
    this->Image_VideoTexture = NULL;
    this->Subtitles = NULL;
}

