#include "FortVideoPlayerWidget.h"

void UFortVideoPlayerWidget::SetupMediaController(float MediaStartTime) {
}

void UFortVideoPlayerWidget::SetSoundClass(USoundClass* InSoundClass) {
}

void UFortVideoPlayerWidget::SetMediaMaterial(UMaterialInterface* VideoMaterial) {
}

UMediaPlayer* UFortVideoPlayerWidget::GetMediaPlayer() const {
    return NULL;
}

void UFortVideoPlayerWidget::DynamicHandleOnOpenMediaFailed(const FString& FailedUrl) {
}

void UFortVideoPlayerWidget::DynamicHandleOnMediaOpened(const FString& OpenedUrl) {
}

UFortVideoPlayerWidget::UFortVideoPlayerWidget() {
    this->bAutoPlayOnOpen = false;
    this->bLoop = false;
    this->bShowSubtitles = false;
    this->bNoAudio = false;
    this->bForceDefaultAudio = false;
    this->SoundClass = NULL;
    this->VideoPlayer = NULL;
    this->MediaController = NULL;
    this->SoundComponent = NULL;
    this->SubtitlePlayer = NULL;
    this->Image_VideoTexture = NULL;
    this->Subtitles = NULL;
}

