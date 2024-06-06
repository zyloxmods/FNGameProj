#include "FortAthenaMutator_Bots.h"
#include "Templates/SubclassOf.h"

AFortPlayerPawnAthena* AFortAthenaMutator_Bots::SpawnBot(TSubclassOf<AFortPlayerPawnAthena> BotPawnClass, const AActor* InSpawnLocator, const FVector InSpawnLocation, const FRotator InSpawnRotation, const bool bSnapToGround) {
    return NULL;
}

void AFortAthenaMutator_Bots::OnSafeZoneUpdated() {
}

AFortAthenaMutator_Bots::AFortAthenaMutator_Bots() {
    bBotHostileToHumanPlayersOnly = true;
    CacheBotData = NULL;
    bSpawnInAir = false;
    MaxAroundBotDistanceToSearchPOIToLand = 1;
    CacheCompositeCurveTable = NULL;
    CacheCompositeDataTable = NULL;
}

