#include "AthenaReplayBrowserRowData.h"

FAthenaReplayBrowserRowData::FAthenaReplayBrowserRowData() {
    this->Version = 0;
    this->Size = 0.00f;
    this->Length = 0.00f;
    this->Rank = 0;
    this->NumPlayers = 0;
    this->Kills = 0;
    this->Views = 0;
    this->Assists = 0;
    this->Accuracy = 0;
    this->bIsOld = false;
    this->bIsSaved = false;
    this->bIsCorrupt = false;
    this->bIsFeatured = false;
}

