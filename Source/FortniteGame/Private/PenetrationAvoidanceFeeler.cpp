#include "PenetrationAvoidanceFeeler.h"

FPenetrationAvoidanceFeeler::FPenetrationAvoidanceFeeler() {
    WorldWeight = 1;
    PawnWeight = 1;
    Extent = 1;
    TraceInterval = 0;
    FramesUntilNextTrace = 0;
}

