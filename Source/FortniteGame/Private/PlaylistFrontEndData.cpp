#include "PlaylistFrontEndData.h"

FPlaylistFrontEndData::FPlaylistFrontEndData() {
    this->PlaylistData = NULL;
    this->Visibility = EPlaylistVisibilityState::Enabled;
    this->bDisplayAsDefault = false;
    this->AdvertiseType = EPlaylistAdvertisementType::None;
    this->bDisplayAsLimitedTime = false;
    this->CategoryIndex = 0;
}

