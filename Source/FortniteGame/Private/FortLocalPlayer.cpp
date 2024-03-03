#include "FortLocalPlayer.h"

UFortGameUserSettings* UFortLocalPlayer::GetLocalSettings() const {
    return NULL;
}

UFortContentControlsManager* UFortLocalPlayer::GetContentControlsManager() const {
    return NULL;
}

UFortClientSettingsRecord* UFortLocalPlayer::GetClientSettings() const {
    return NULL;
}

UFortLocalPlayer::UFortLocalPlayer() {
    this->FortOnlineAccount = NULL;
    this->ClientSettingsRecord = NULL;
    this->ContentControlsManager = NULL;
    this->bControllerAttached = true;
    this->PoiTracker = NULL;
}

