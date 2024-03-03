#include "PlaylistFrontEndData.h"

FPlaylistFrontEndData::FPlaylistFrontEndData() {
    this->Visibility = (EPlaylistVisibilityState)0;
    this->bDisplayAsDefault = false;
    this->AdvertiseType = EPlaylistAdvertisementType::None;
    this->bDisplayAsLimitedTime = false;
    this->CategoryIndex = 0;
}

