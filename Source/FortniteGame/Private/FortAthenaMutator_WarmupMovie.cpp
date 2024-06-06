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
    MovieLengthSeconds = 1;
    bServerMovieStart = false;
    MovieWidget = NULL;
    SkydiveTransitionMusic = NULL;
    WarmupMovieMix = NULL;
    WaitingScreen = NULL;
    SpawnEffectClass = NULL;
    MediaPlayer = NULL;
}

