#include "DataAssetDirectoryManager.h"

UDataAssetDirectoryManager::UDataAssetDirectoryManager() {
    this->bUpdateCheckPending = false;
    this->UpdateCheckLimitSeconds = 0;
    this->bEnabled = true;
}

