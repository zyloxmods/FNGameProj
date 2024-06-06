#include "HoverDronePawn.h"

bool AHoverDronePawn::IsMaintainingConstantAltitude() const {
    return false;
}

float AHoverDronePawn::GetAltitude() const {
    return 0.0f;
}

AHoverDronePawn::AHoverDronePawn() {
    HoverMoveComponent = NULL;
}

