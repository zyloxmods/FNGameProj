#include "FortAthenaMutator_WarmupMovie.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_WarmupMovie::ShowMovieWidget(UCommonActivatablePanel* InMovieWidget, UMediaPlayer* InMediaPlayer) {
}



void AFortAthenaMutator_WarmupMovie::OnMediaClosedOrEndReached() {
}

void AFortAthenaMutator_WarmupMovie::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_WarmupMovie, bServerMovieStart);
}

AFortAthenaMutator_WarmupMovie::AFortAthenaMutator_WarmupMovie() {
    this->MovieLengthSeconds = 1;
    this->bServerMovieStart = false;
    this->MovieWidget = NULL;
    this->SkydiveTransitionMusic = NULL;
    this->WarmupMovieMix = NULL;
    this->WaitingScreen = NULL;
    this->SpawnEffectClass = NULL;
    this->MediaPlayer = NULL;
}

