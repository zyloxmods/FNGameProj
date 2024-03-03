#include "FortEncounterSettings.h"

FFortEncounterSettings::FFortEncounterSettings() {
    this->bRiftsDestroyPlayerBuiltBuildings = false;
    this->bValidateIfPlayerIsAtSpawnLocation = false;
    this->bMustFindSpawnPoints = false;
    this->bStopIfCantFindSpawnPoint = false;
    this->bIgnoreCollisionWhenSpawningAI = false;
    this->bTrackCombatParticipation = false;
    this->bDisplayThreatVisuals = false;
    this->BurstSpawnThreatVisualsEndDelayOverride = 1;
    this->NumRiftsToUseOverride = 0;
    this->bUseEQSQueryToFindAISpawnLocations = false;
    this->bRelevantForTotalAICap = false;
    this->bEnableRecreateRift = false;
    this->bRespawnRiftWhenRiftDead = false;
    this->bRandomiseQueryRiftLocations = false;
    this->bOverrideEqsFallback = false;
    this->PreSpawnRequeryTime = 1;
    this->SpawnAIIntervalTime = 1;
    this->SpawnRiftIntervalTime = 1;
    this->bSpawnFirstRiftNoDelay = false;
    this->RiftSelectionQuery = NULL;
    this->RiftSlotsEQSQueryOverride = NULL;
    this->RiftClassOverride = NULL;
    this->EncounterGroupID = 0;
    this->ZoneIndex = 0;
    this->DifficultyIndex = 0;
    this->AIDespawnDistanceOverride = 1;
}

