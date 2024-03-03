#include "FortTouchMoveStick.h"


void UFortTouchMoveStick::SetStickPosition(FVector2D NewPosition) {
}

void UFortTouchMoveStick::SetMovementLockStatus_Implementation(bool MovementIsLocked) {
}

bool UFortTouchMoveStick::IsTouched() const {
    return false;
}

bool UFortTouchMoveStick::IsLocked() const {
    return false;
}

void UFortTouchMoveStick::HandleTouchStarted_Implementation() {
}

void UFortTouchMoveStick::HandleTouchEnded_Implementation() {
}

FVector2D UFortTouchMoveStick::GetStickPosition() const {
    return FVector2D{};
}

float UFortTouchMoveStick::GetHalfHeight() const {
    return 0.0f;
}

UFortTouchMoveStick::UFortTouchMoveStick() {
    this->bIsTouched = false;
    this->bMoveStickIsLocked = false;
    this->bAlwaysShowWhenTouched = false;
    this->TouchStartTime = 1;
    this->LastTouchTime = 1;
}

