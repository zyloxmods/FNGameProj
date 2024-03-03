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
    this->CachedGameMode = NULL;
    this->CachedGameState = NULL;
    this->CachedBotMutator = NULL;
    this->bBotHostileToHumanPlayersOnly = false;
    this->TagQueryWeightChance = NULL;
    this->BotItemDataTable = NULL;
    this->MaxAroundBotDistanceToSearchPOIToLand = 1;
    this->LastTeamPlayerStart = NULL;
    this->DeadBotCleanupMinDelay = 1;
    this->CurrentFillingTeam = NULL;
    this->CurrentBotControllerUID = 0;
    this->CachedAIPopulationTracker = NULL;
}

