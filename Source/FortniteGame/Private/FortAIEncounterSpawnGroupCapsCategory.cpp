#include "FortAIEncounterSpawnGroupCapsCategory.h"

FFortAIEncounterSpawnGroupCapsCategory::FFortAIEncounterSpawnGroupCapsCategory() {
    this->bApplyGroupPopulationCurveToCategoryMax = false;
    this->InitialSpawnGroupAvailabilityTime = 1;
    this->NumActiveCategorySpawnGroups = 1;
    this->NumSpawnGroupAvailable = 0;
    this->CategorySource = NULL;
}

