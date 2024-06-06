#include "BuildingPropMusicPlayer.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"

void ABuildingPropMusicPlayer::StartSongForOptionsChange() {
}

void ABuildingPropMusicPlayer::OnRep_PlayingSongData() {
}

void ABuildingPropMusicPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingPropMusicPlayer, PlayingSongData);
}

ABuildingPropMusicPlayer::ABuildingPropMusicPlayer() {
    bCheckAlternateHotfixValue = false;
    bPlayingByDefault = false;
    bPlayRandomSong = false;
    MusicTrackTable = NULL;
    SongAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SongAudioComponent"));
    PlaybackType = EMusicTrackPlayback::Disabled;
}

