#include "FortAIDirectorDataManager.h"

void AFortAIDirectorDataManager::TriggerEvent(const FFortAIDirectorEvent& TriggeredEvent) {
}

float AFortAIDirectorDataManager::GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor) const {
    return 0.0f;
}

AFortAIDirectorDataManager::AFortAIDirectorDataManager() {
    OwnerObject = NULL;
}

