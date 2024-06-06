#include "FortZoneRecord.h"

UFortZoneRecord::UFortZoneRecord() {
    WorldSaveCount = 0;
    ZoneIndex = 0;
    NumSavedLevels = 0;
    ZoneTileSeed = 0;
    CloudSaveItemDefContentVersion = 0;
    bNeedsFullActorSave = false;
}

