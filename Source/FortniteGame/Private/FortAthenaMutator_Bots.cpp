#include "FortAthenaMutator_Bots.h"
#include "Templates/SubclassOf.h"

AFortPlayerPawnAthena* AFortAthenaMutator_Bots::SpawnBot(TSubclassOf<AFortPlayerPawnAthena> BotPawnClass, const AActor* InSpawnLocator, const FVector InSpawnLocation, const FRotator InSpawnRotation, const bool bSnapToGround) {
    return NULL;
}

void AFortAthenaMutator_Bots::OnSafeZoneUpdated() {
}

AFortAthenaMutator_Bots::AFortAthenaMutator_Bots() {
    this->bBotHostileToHumanPlayersOnly = true;
    this->CacheBotData = NULL;
    this->bSpawnInAir = false;
    this->MaxAroundBotDistanceToSearchPOIToLand = 1;
    this->CacheCompositeCurveTable = NULL;
    this->CacheCompositeDataTable = NULL;
}

