#include "FortAthenaAIBotEvaluator_Storm.h"

void UFortAthenaAIBotEvaluator_Storm::OnSafezoneStateChanged(const EFortSafeZoneState NewState) {
}

void UFortAthenaAIBotEvaluator_Storm::OnSafezonePhaseChanged() {
}

UFortAthenaAIBotEvaluator_Storm::UFortAthenaAIBotEvaluator_Storm() {
    this->SafezoneStateName = TEXT("AIEvaluator_Storm_State");
    this->SafezonePhaseName = TEXT("AIEvaluator_Storm_Phase");
    this->AthenaGameMode = NULL;
    this->CachedBTComp = NULL;
}

