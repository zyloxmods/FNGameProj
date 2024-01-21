#include "FortClientMarkerRequest.h"

FFortClientMarkerRequest::FFortClientMarkerRequest() {
    this->InstanceId = 0;
    this->MarkerType = EFortWorldMarkerType::None;
    this->MarkedActor = NULL;
}

