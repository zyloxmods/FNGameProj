#include "FortWorldMarkerData.h"

FFortWorldMarkerData::FFortWorldMarkerData() {
    this->Owner = NULL;
    this->MarkerType = EFortWorldMarkerType::None;
    this->ItemDefinition = NULL;
    this->ItemCount = 0;
    this->MarkedActor = NULL;
    this->bIncludeSquad = false;
    this->bHasCustomDisplayInfo = false;
    this->bUseHoveredMarkerDetail = false;
    this->MarkerInstance = NULL;
}

