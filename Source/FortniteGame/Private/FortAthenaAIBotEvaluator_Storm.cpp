#include "FortAthenaAIBotEvaluator_Storm.h"

void UFortAthenaAIBotEvaluator_Storm::OnSafezoneStateChanged(const EFortSafeZoneState NewState) {
}

void UFortAthenaAIBotEvaluator_Storm::OnSafezonePhaseChanged() {
}

UFortAthenaAIBotEvaluator_Storm::UFortAthenaAIBotEvaluator_Storm() {
    StormDestinationName = TEXT("AIEvaluator_Storm_Destination");
    CacheAthenaGameMode = NULL;
    CachedBTComp = NULL;
}

