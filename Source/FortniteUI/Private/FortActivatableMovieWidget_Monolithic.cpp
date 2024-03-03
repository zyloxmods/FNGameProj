#include "FortActivatableMovieWidget_Monolithic.h"

void UFortActivatableMovieWidget_Monolithic::StreamedVideoOnUrlSuccess(const FString& URL) {
}

void UFortActivatableMovieWidget_Monolithic::StreamedVideoOnUrlFailure(const FString& URL) {
}

void UFortActivatableMovieWidget_Monolithic::Play() {
}

void UFortActivatableMovieWidget_Monolithic::LoadStreamingVideo(FVideoConfig_Mono Config, UFortStreamMediaSource* StreamMediaSource, bool& bNoAutoPlay) {
}

UFortActivatableMovieWidget_Monolithic::UFortActivatableMovieWidget_Monolithic() {
    this->MediaSourceMono = NULL;
    this->StreamedMediaPlayer = NULL;
}

