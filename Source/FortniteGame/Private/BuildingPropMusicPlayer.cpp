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
    this->bCheckAlternateHotfixValue = false;
    this->bPlayingByDefault = false;
    this->bPlayRandomSong = false;
    this->MusicTrackTable = NULL;
    this->SongAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SongAudioComponent"));
    this->PlaybackType = EMusicTrackPlayback::Enabled;
}

