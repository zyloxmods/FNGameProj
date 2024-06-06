#include "FortEncounterSettings.h"

FFortEncounterSettings::FFortEncounterSettings() {
    bRiftsDestroyPlayerBuiltBuildings = false;
    bValidateIfPlayerIsAtSpawnLocation = false;
    bMustFindSpawnPoints = false;
    bStopIfCantFindSpawnPoint = false;
    bIgnoreCollisionWhenSpawningAI = false;
    bTrackCombatParticipation = false;
    bDisplayThreatVisuals = false;
    BurstSpawnThreatVisualsEndDelayOverride = 1;
    NumRiftsToUseOverride = 0;
    bUseEQSQueryToFindAISpawnLocations = false;
    bRelevantForTotalAICap = false;
    bEnableRecreateRift = false;
    bRespawnRiftWhenRiftDead = false;
    bRandomiseQueryRiftLocations = false;
    bOverrideEqsFallback = false;
    PreSpawnRequeryTime = 1;
    SpawnAIIntervalTime = 1;
    SpawnRiftIntervalTime = 1;
    bSpawnFirstRiftNoDelay = false;
    RiftSelectionQuery = NULL;
    RiftSlotsEQSQueryOverride = NULL;
    RiftClassOverride = NULL;
    EncounterGroupID = 0;
    ZoneIndex = 0;
    DifficultyIndex = 0;
    AIDespawnDistanceOverride = 1;
}

