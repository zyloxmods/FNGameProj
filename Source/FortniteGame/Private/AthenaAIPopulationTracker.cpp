#include "AthenaAIPopulationTracker.h"

void UAthenaAIPopulationTracker::OnAISpawned(APawn* Pawn, const int32 RequestID) {
}

void UAthenaAIPopulationTracker::OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn) {
}

UAthenaAIPopulationTracker::UAthenaAIPopulationTracker() {
    CachedGameMode = NULL;
}

