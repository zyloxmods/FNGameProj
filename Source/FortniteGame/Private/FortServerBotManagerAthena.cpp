#include "FortServerBotManagerAthena.h"
#include "FortAthenaAIBotController.h"

UFortServerBotManagerAthena::UFortServerBotManagerAthena() {
    this->BotPlayerPawnClass = AFortAthenaAIBotController::StaticClass();
    this->CachedGameMode = NULL;
    this->LastBotTeam = 255;
    this->CachedBotMutator = NULL;
    this->bAddBotOnMinimap = false;
}

