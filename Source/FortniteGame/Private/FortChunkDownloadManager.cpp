#include "FortChunkDownloadManager.h"

UFortChunkDownloadManager::UFortChunkDownloadManager() {
    this->DownloadTimeoutSeconds = 30.00f;
    this->bAssumeAllDataPresent = false;
}

