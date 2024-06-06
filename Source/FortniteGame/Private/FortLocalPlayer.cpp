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
    FortOnlineAccount = NULL;
    ClientSettingsRecord = NULL;
    ContentControlsManager = NULL;
    bControllerAttached = true;
    PoiTracker = NULL;
}

