#include "PlaylistAccess.h"

FPlaylistAccess::FPlaylistAccess() {
    this->bForcePlaylistOff = false;
    this->bEnabled = false;
    this->bVisibleWhenDisabled = false;
    this->bIsDefaultPlaylist = false;
    this->AdvertiseType = EPlaylistAdvertisementType::None;
    this->bDisplayAsLimitedTime = false;
    this->DisplayPriority = 0;
    this->CategoryIndex = 0;
}

