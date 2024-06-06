#include "FortWorldMarkerData.h"

FFortWorldMarkerData::FFortWorldMarkerData() {
    Owner = NULL;
    MarkerType = EFortWorldMarkerType::None;
    ItemDefinition = NULL;
    ItemCount = 0;
    MarkedActor = NULL;
    bIncludeSquad = false;
    bHasCustomDisplayInfo = false;
    bUseHoveredMarkerDetail = false;
    MarkerInstance = NULL;
}

