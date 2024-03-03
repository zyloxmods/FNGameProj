#include "PlayspaceGameState.h"
#include "Playspace.h"

APlayspaceGameState::APlayspaceGameState() {
    this->RootPlayspaceClass = APlayspace::StaticClass();
    this->bUsePlayspaceSystem = false;
    this->bUsePlayerSpawningComponent = false;
    this->PlayspaceManagerComponentCached = NULL;
    this->PlayerSpawningManagerCached = NULL;
}

