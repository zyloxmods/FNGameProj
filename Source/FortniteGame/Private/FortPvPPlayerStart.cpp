#include "FortPvPPlayerStart.h"

AFortPvPPlayerStart::AFortPvPPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->Team = 0;
    this->bDynamicStartLocation = false;
}

