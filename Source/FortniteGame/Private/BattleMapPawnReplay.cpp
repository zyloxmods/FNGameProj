#include "BattleMapPawnReplay.h"

void ABattleMapPawnReplay::HandleTimeIndicatorUpdatedSegment(const ABattleMapNode* StartNode, const ABattleMapEdge* Edge, const ABattleMapNode* EndNode) {
}

void ABattleMapPawnReplay::HandleRightMouseUp() {
}

void ABattleMapPawnReplay::HandleRightMouseDown() {
}

void ABattleMapPawnReplay::HandleReplayEventRemoving(int32 Index) {
}

void ABattleMapPawnReplay::HandleRefreshingReplayEvents() {
}

void ABattleMapPawnReplay::HandlePlaybackTimeChanged(float NowTime) {
}

void ABattleMapPawnReplay::HandleLeftMouseUp() {
}

void ABattleMapPawnReplay::HandleLeftMouseDown() {
}

void ABattleMapPawnReplay::HandleGotoTimeComplete(bool bWasSuccessful) {
}

void ABattleMapPawnReplay::HandleCompletedAllRequested() {
}

void ABattleMapPawnReplay::HandleCameraOutsideSafeZoneChanged(bool bCameraOutsideSafeZone) {
}

void ABattleMapPawnReplay::HandleBattleMapShowTimeIndicatorChanged(bool bEnabled) {
}

void ABattleMapPawnReplay::HandleBattleMapShowNearbyChestsChanged(bool bEnabled) {
}

void ABattleMapPawnReplay::HandleBattleMapShowAllSquadMembersChanged(bool bEnabled) {
}

void ABattleMapPawnReplay::HandleBattleMapAutomaticCameraPlacementChanged(bool bEnabled) {
}

bool ABattleMapPawnReplay::BP_SetTimelineMode(bool bEnabled) {
    return false;
}

bool ABattleMapPawnReplay::BP_IsOnTimelineMode() const {
    return false;
}

ABattleMapPawnReplay::ABattleMapPawnReplay() {
    GroundMoveNodeClass = NULL;
    AirMoveNodeClass = NULL;
    GotKillNodeClass = NULL;
    ZoneNodeClass = NULL;
    TeamFlightNodeClass = NULL;
    TimeIndicatorClass = NULL;
    SelectedNodeSound = NULL;
    HoveredNodeSound = NULL;
    ScrubbingToSound = NULL;
}

