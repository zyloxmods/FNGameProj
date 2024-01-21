#include "FortTheaterRuntimeData.h"

FFortTheaterRuntimeData::FFortTheaterRuntimeData() {
    this->TheaterType = EFortTheaterType::Standard;
    this->RequiredSubGameForVisibility = ESubGame::Campaign;
    this->bOnlyMatchLinkedQuestsToTiles = false;
    this->WorldMapPinClass = NULL;
    this->TheaterImage = NULL;
    this->HighestDifficulty = 0.00f;
}

