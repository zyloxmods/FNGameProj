#include "FortServerBotManagerAthena.h"

AFortPlayerPawnAthena* UFortServerBotManagerAthena::SpawnBot(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAIBotCustomizationData* InBotData, const FFortAthenaAIBotRunTimeCustomizationData& InRuntimeBotData) {
    return NULL;
}

APawn* UFortServerBotManagerAthena::SpawnAI(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList) {
    return NULL;
}

void UFortServerBotManagerAthena::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UFortServerBotManagerAthena::KillBots(bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, AActor* BotOwner) {
}

void UFortServerBotManagerAthena::JoinTeam(const AController* SourceTeamController, AController* DestinationTeamController) {
}

UFortServerBotManagerAthena::UFortServerBotManagerAthena() {
    CachedGameMode = NULL;
    CachedGameState = NULL;
    CachedBotMutator = NULL;
    bBotHostileToHumanPlayersOnly = false;
    TagQueryWeightChance = NULL;
    BotItemDataTable = NULL;
    MaxAroundBotDistanceToSearchPOIToLand = 1;
    LastTeamPlayerStart = NULL;
    DeadBotCleanupMinDelay = 1;
    CurrentFillingTeam = NULL;
    CurrentBotControllerUID = 0;
    CachedAIPopulationTracker = NULL;
}

