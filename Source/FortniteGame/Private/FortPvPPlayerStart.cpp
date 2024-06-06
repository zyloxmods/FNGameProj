#include "FortPvPPlayerStart.h"

AFortPvPPlayerStart::AFortPvPPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    Team = 0;
    bDynamicStartLocation = false;
}

