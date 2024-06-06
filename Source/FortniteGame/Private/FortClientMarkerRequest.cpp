#include "FortClientMarkerRequest.h"

FFortClientMarkerRequest::FFortClientMarkerRequest() {
    InstanceID = 0;
    MarkerType = EFortWorldMarkerType::None;
    MarkedActor = NULL;
    bIncludeSquad = false;
    bUseHoveredMarkerDetail = false;
}

