#include "FortWorldMarkerData.h"

FFortWorldMarkerData::FFortWorldMarkerData() {
    this->Owner = NULL;
    this->MarkerType = EFortWorldMarkerType::None;
    this->ItemDefinition = NULL;
    this->bHasCustomDisplayInfo = false;
}

