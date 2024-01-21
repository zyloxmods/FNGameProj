#include "BattleMapPawn.h"

void ABattleMapPawn::OnCompletedAllRequestedEvent() {
}

ABattleMapPawn::ABattleMapPawn() {
    this->GroundMoveNodeClass = NULL;
    this->AirMoveNodeClass = NULL;
    this->GotKillNodeClass = NULL;
    this->ZoneNodeClass = NULL;
    this->TeamFlightNodeClass = NULL;
}

