#include "BulletWhipTrackerComponentBase.h"

void UBulletWhipTrackerComponentBase::UpdateVelocity(FVector CurrentVelocity) {
}

void UBulletWhipTrackerComponentBase::Reset(FVector StartLocationIn) {
}

void UBulletWhipTrackerComponentBase::Disable() {
}

UBulletWhipTrackerComponentBase::UBulletWhipTrackerComponentBase() {
    this->bEnableGravityCheck = false;
    this->CachedPassByPawn = NULL;
}

