#include "PenetrationAvoidanceFeeler.h"

FPenetrationAvoidanceFeeler::FPenetrationAvoidanceFeeler() {
    this->WorldWeight = 1;
    this->PawnWeight = 1;
    this->Extent = 1;
    this->TraceInterval = 0;
    this->FramesUntilNextTrace = 0;
}

