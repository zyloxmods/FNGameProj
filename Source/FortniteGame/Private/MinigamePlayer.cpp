#include "MinigamePlayer.h"

FMinigamePlayer::FMinigamePlayer() {
    bHasValidResetData = false;
    ClassSlotIndex = 0;
    LastClassSwitchTime = 1;
    TeamBeforeMinigameStarted = 0;
    bIsLocationBeforeGameStartedBlocked = false;
    bWasSkydivingBeforeMinigameStarted = false;
    bWasFlyingBeforeMinigameStarted = false;
    bIsTeleportingOrRespawningForGameplay = false;
    bIsLocalPlayer = false;
    bPreparingForRespawn = false;
    ClaimedPlayerStart = NULL;
}

