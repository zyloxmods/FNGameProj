#include "FortZoneRecord.h"

UFortZoneRecord::UFortZoneRecord() {
    this->WorldSaveCount = 0;
    this->ZoneIndex = 0;
    this->NumSavedLevels = 0;
    this->ZoneTileSeed = 0;
    this->CloudSaveItemDefContentVersion = 0;
    this->bNeedsFullActorSave = false;
}

