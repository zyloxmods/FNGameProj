#include "PlayspacePlayerController.h"
#include "PlayspaceControllerComponent_PlayerSpawning.h"

APlayspacePlayerController::APlayspacePlayerController() {
    this->bUsePlayerSpawningComponent = false;
    this->ControllerSpawningComponent = UPlayspaceControllerComponent_PlayerSpawning::StaticClass();
}

