#include "AthenaBattleMapTimelineWidget.h"

void UAthenaBattleMapTimelineWidget::OnReplayLevelStreamingChanged(const bool bStreaming) {
}

void UAthenaBattleMapTimelineWidget::HandleZoomOutPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleZoomOutHeld(float HeldPercent) {
}

void UAthenaBattleMapTimelineWidget::HandleZoomInPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleZoomInHeld(float HeldPercent) {
}

void UAthenaBattleMapTimelineWidget::HandleToggledBattleMapLive(ABattleMapPawnLive* BattleMapPawn) {
}

void UAthenaBattleMapTimelineWidget::HandleTimelineStopPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleTimelineScrubToPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleTimelineModeChanged(bool bEnabled) {
}

void UAthenaBattleMapTimelineWidget::HandleTimelineForwardPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleTimelineBackwardPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleSelectedNode(const ABattleMapNode* InSelectedNode) {
}

void UAthenaBattleMapTimelineWidget::HandleExitBattleMapPressed(bool& bPassThrough) {
}

void UAthenaBattleMapTimelineWidget::HandleCameraTypeChanged(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType) {
}

UAthenaBattleMapTimelineWidget::UAthenaBattleMapTimelineWidget() {
    this->Button_Forward = NULL;
    this->Button_Backward = NULL;
    this->ForwardButtonPositionAlpha = 1;
    this->BackwardButtonPositionAlpha = 1;
}

