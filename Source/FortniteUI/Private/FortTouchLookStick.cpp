#include "FortTouchLookStick.h"

void UFortTouchLookStick::SetTouchStickPositionLocal(FVector2D TouchPosition) {
}

void UFortTouchLookStick::SetTouchStickPositionAbsolute(FVector2D TouchPosition) {
}

void UFortTouchLookStick::SetSize(float NewSize) {
}

void UFortTouchLookStick::SetFiringState_Implementation(bool IsFiring) {
}

void UFortTouchLookStick::OnFireFromIndexStopped(const int32 StopFireIndex) {
}

bool UFortTouchLookStick::IsFireButtonUnderTouch_Implementation(FVector2D TouchPosition) const {
    return false;
}

float UFortTouchLookStick::GetSize() const {
    return 0.0f;
}

bool UFortTouchLookStick::GetShowAllTimeTime() const {
    return false;
}

UFortTouchLookStick::UFortTouchLookStick() {
    this->MainSizeBox = NULL;
    this->Button_DBNOCarryThrow = NULL;
}

