#include "FortClientMarkerRequest.h"

FFortClientMarkerRequest::FFortClientMarkerRequest() {
    this->InstanceID = 0;
    this->MarkerType = EFortWorldMarkerType::None;
    this->MarkedActor = NULL;
    this->bIncludeSquad = false;
    this->bUseHoveredMarkerDetail = false;
}

