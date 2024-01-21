#include "MinigamePlayer.h"

FMinigamePlayer::FMinigamePlayer() {
    this->bHasValidResetData = false;
    this->TeamBeforeMinigameStarted = 0;
    this->bIsLocationBeforeGameStartedBlocked = false;
    this->bWasSkydivingBeforeMinigameStarted = false;
    this->bWasFlyingBeforeMinigameStarted = false;
    this->bIsTeleportingOrRespawningForGameplay = false;
    this->bIsLocalPlayer = false;
    this->ClaimedPlayerStart = NULL;
}

