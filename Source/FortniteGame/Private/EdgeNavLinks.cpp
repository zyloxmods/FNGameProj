#include "EdgeNavLinks.h"

AEdgeNavLinks::AEdgeNavLinks() {
    this->DistanceBetweenLinks = 400.00f;
    this->SnapRadius = 60.00f;
    this->SnapHeight = 200.00f;
    this->LinkProjectionHeight = 3000.00f;
    this->RightLinkForwardOffset = 450.00f;
    this->CollisionChannel = ECC_WorldStatic;
    this->bManualAdjustment = false;
}

