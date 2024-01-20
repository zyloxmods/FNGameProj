#include "FortAthenaMutator_Bots.h"
#include "Templates/SubclassOf.h"

AFortPlayerPawnAthena* AFortAthenaMutator_Bots::SpawnBot(TSubclassOf<AFortPlayerPawnAthena> BotPawnClass, const AActor* InSpawnLocator, const FVector InSpawnLocation, const FRotator InSpawnRotation, const bool bSnapToGround) {
    return NULL;
}

AFortAthenaMutator_Bots::AFortAthenaMutator_Bots() {
    this->bBotHostileToHumanPlayersOnly = true;
    this->ServerBotManagerClass = NULL;
}

