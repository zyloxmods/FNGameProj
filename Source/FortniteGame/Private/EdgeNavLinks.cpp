#include "EdgeNavLinks.h"

AEdgeNavLinks::AEdgeNavLinks() {
    DistanceBetweenLinks = 1;
    SnapRadius = 1;
    SnapHeight = 1;
    LinkProjectionHeight = 1;
    RightLinkForwardOffset = 1;
    CollisionChannel = ECC_WorldStatic;
    bManualAdjustment = false;
}

