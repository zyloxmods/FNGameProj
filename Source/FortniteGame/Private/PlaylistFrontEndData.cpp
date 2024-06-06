#include "PlaylistFrontEndData.h"

FPlaylistFrontEndData::FPlaylistFrontEndData() {
    Visibility = (EPlaylistVisibilityState)0;
    bDisplayAsDefault = false;
    AdvertiseType = EPlaylistAdvertisementType::None;
    bDisplayAsLimitedTime = false;
    CategoryIndex = 0;
}

