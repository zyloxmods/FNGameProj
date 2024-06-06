#include "BattleMapPawnLive.h"

void ABattleMapPawnLive::ZoomIn(const float Val) {
}

void ABattleMapPawnLive::HandleTimeIndicatorUpdatedSegment(const ABattleMapNode* StartNode, const ABattleMapEdge* Edge, const ABattleMapNode* EndNode) {
}

bool ABattleMapPawnLive::HandleClickReleased(FKey ButtonReleased) {
    return false;
}

bool ABattleMapPawnLive::HandleClickPressed(FKey ButtonPressed) {
    return false;
}

bool ABattleMapPawnLive::BP_SetTimelineMode(bool bEnabled) {
    return false;
}

bool ABattleMapPawnLive::BP_IsOnTimelineMode() const {
    return false;
}

ABattleMapPawnLive::ABattleMapPawnLive() {
    GroundMoveNodeClass = NULL;
    AirMoveNodeClass = NULL;
    GotKillNodeClass = NULL;
    ZoneNodeClass = NULL;
    TeamFlightNodeClass = NULL;
    TimeIndicatorClass = NULL;
    SelectedNodeSound = NULL;
    HoveredNodeSound = NULL;
}

