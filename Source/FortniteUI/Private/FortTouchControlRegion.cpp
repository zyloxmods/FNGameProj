#include "FortTouchControlRegion.h"

void UFortTouchControlRegion::UpdateLockOnStickPosition(FVector2D LocalPos) {
}

void UFortTouchControlRegion::UpdateLockOnStickOrigin(FVector2D LocalPos, bool IsTouchStartEvent) {
}

void UFortTouchControlRegion::SetMoveStickPos(FVector2D NewMoveStickPos) {
}

void UFortTouchControlRegion::SetLockOnStickPosition(FVector2D LocalPos) {
}

void UFortTouchControlRegion::SetFeedbackPosition_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::RotatePlayerRegionTick_Implementation(const FGeometry& InGeometry, const float DeltaTime) {
}

void UFortTouchControlRegion::ResetTouchState() {
}

void UFortTouchControlRegion::OnRotatePlayerRegionTouchStarted_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::OnRotatePlayerRegionTouchMoved_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent, const FVector2D& MoveDelta) {
}

void UFortTouchControlRegion::OnRotatePlayerRegionTouchLost_Implementation(int32 PointerIndex) {
}

void UFortTouchControlRegion::OnRotatePlayerRegionTouchEnded_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}




void UFortTouchControlRegion::OnMovePlayerRegionTouchStarted_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::OnMovePlayerRegionTouchMoved_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::OnMovePlayerRegionTouchLost_Implementation(int32 PointerIndex) {
}

void UFortTouchControlRegion::OnMovePlayerRegionTouchEnded_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget) {
}

void UFortTouchControlRegion::OnBuildModeChanged(bool bBuildModeEnabled) {
}

void UFortTouchControlRegion::OnAdditionalTouchStarted_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::OnAdditionalTouchLost_Implementation(int32 PointerIndex) {
}

void UFortTouchControlRegion::OnAdditionalTouchEnded_Implementation(const FGeometry& InGeometry, const FPointerEvent& InGestureEvent) {
}

void UFortTouchControlRegion::MovePlayerRegionTick_Implementation(const FGeometry& InGeometry, const float DeltaTime) {
}

float UFortTouchControlRegion::GetTouchStickRange() const {
    return 0.0f;
}

UFortTouchControlRegion::UFortTouchControlRegion() {
    this->RegisteredTouchMoveStick = NULL;
    this->RegisteredTouchLookStick = NULL;
    this->RegisteredAutoRunLockTarget = NULL;
    this->bLastLookTouchWasTap = false;
    this->bIsLockedOn = false;
    this->MoveStickLastTouchTime = 1;
    this->RotateCameraLastTouchTime = 1;
    this->RotateInertiaCurve = NULL;
}

