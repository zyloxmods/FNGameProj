#include "MinigamePlayer.h"

FMinigamePlayer::FMinigamePlayer() {
    this->bHasValidResetData = false;
    this->ClassSlotIndex = 0;
    this->LastClassSwitchTime = 1;
    this->TeamBeforeMinigameStarted = 0;
    this->bIsLocationBeforeGameStartedBlocked = false;
    this->bWasSkydivingBeforeMinigameStarted = false;
    this->bWasFlyingBeforeMinigameStarted = false;
    this->bIsTeleportingOrRespawningForGameplay = false;
    this->bIsLocalPlayer = false;
    this->bPreparingForRespawn = false;
    this->ClaimedPlayerStart = NULL;
}

