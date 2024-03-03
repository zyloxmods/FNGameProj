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
    this->GroundMoveNodeClass = NULL;
    this->AirMoveNodeClass = NULL;
    this->GotKillNodeClass = NULL;
    this->ZoneNodeClass = NULL;
    this->TeamFlightNodeClass = NULL;
    this->TimeIndicatorClass = NULL;
    this->SelectedNodeSound = NULL;
    this->HoveredNodeSound = NULL;
}

