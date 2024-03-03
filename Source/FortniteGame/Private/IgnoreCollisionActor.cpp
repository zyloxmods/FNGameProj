#include "IgnoreCollisionActor.h"

FIgnoreCollisionActor::FIgnoreCollisionActor() {
    this->IgnoreActor = NULL;
    this->TimeIgnoreStarted = 1;
    this->IgnoreDuration = 1;
}

