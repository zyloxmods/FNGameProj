#include "EdgeNavLinks.h"

AEdgeNavLinks::AEdgeNavLinks() {
    this->DistanceBetweenLinks = 1;
    this->SnapRadius = 1;
    this->SnapHeight = 1;
    this->LinkProjectionHeight = 1;
    this->RightLinkForwardOffset = 1;
    this->CollisionChannel = ECC_WorldStatic;
    this->bManualAdjustment = false;
}

