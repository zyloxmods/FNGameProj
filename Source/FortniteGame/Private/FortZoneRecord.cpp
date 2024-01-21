#include "FortZoneRecord.h"

UFortZoneRecord::UFortZoneRecord() {
    this->WorldSaveCount = 0;
    this->ZoneIndex = -1;
    this->NumSavedLevels = -1;
    this->ZoneTileSeed = 0;
    this->CloudSaveItemDefContentVersion = 0;
    this->bNeedsFullActorSave = false;
}

