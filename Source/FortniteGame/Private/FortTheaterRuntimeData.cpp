#include "FortTheaterRuntimeData.h"

FFortTheaterRuntimeData::FFortTheaterRuntimeData() {
    TheaterType = EFortTheaterType::Standard;
    RequiredSubGameForVisibility = ESubGame::Campaign;
    bOnlyMatchLinkedQuestsToTiles = false;
    WorldMapPinClass = NULL;
    TheaterImage = NULL;
    HighestDifficulty = 1;
}

