#include "FortPlaylistUIInfo.h"

UFortPlaylistUIInfo::UFortPlaylistUIInfo() {
    this->PostGamePlacementOverlayClass = NULL;
    this->VictoryStinger = NULL;
    this->bIsCinematicVictory = false;
    this->bShouldPushEmoteInput = false;
    this->bShouldPlayOnLoss = false;
    this->StingerFadesToAudioMusicAfter = 1;
}

