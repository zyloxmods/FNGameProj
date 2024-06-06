#include "PlaylistAccess.h"

FPlaylistAccess::FPlaylistAccess() {
    bForcePlaylistOff = false;
    bEnabled = false;
    bVisibleWhenDisabled = false;
    bInvisibleWhenEnabled = false;
    bIsDefaultPlaylist = false;
    AdvertiseType = EPlaylistAdvertisementType::None;
    bDisplayAsLimitedTime = false;
    DisplayPriority = 0;
    CategoryIndex = 0;
}

