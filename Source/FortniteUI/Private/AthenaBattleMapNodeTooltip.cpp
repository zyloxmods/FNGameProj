#include "AthenaBattleMapNodeTooltip.h"

void UAthenaBattleMapNodeTooltip::OnReplayLevelStreamingChanged(const bool bStreaming) {
}

void UAthenaBattleMapNodeTooltip::HandleUnhoveredNode(const ABattleMapNode* Node, BattleMapHoveredReason Reason) {
}

void UAthenaBattleMapNodeTooltip::HandleToggledBattleMapLive(ABattleMapPawnLive* BattleMapPawn) {
}

void UAthenaBattleMapNodeTooltip::HandleTimelineModeChanged(bool bEnabled) {
}

void UAthenaBattleMapNodeTooltip::HandleInputMethodChanged(ECommonInputType NewInputType) {
}

void UAthenaBattleMapNodeTooltip::HandleHoveredNode(const ABattleMapNode* Node, BattleMapHoveredReason Reason) {
}

void UAthenaBattleMapNodeTooltip::HandleCameraTypeChanged(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType) {
}

UAthenaBattleMapNodeTooltip::UAthenaBattleMapNodeTooltip() {
    this->TextBlock_NodeTitle = NULL;
    this->TextBlock_NodeDescription = NULL;
    this->TextBlock_NodeTime = NULL;
    this->Widget_Selection = NULL;
    this->Widget_Scrubbing = NULL;
    this->Widget_ScrubbingGamepad = NULL;
}

