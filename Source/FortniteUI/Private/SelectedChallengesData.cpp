#include "SelectedChallengesData.h"

FSelectedChallengesData::FSelectedChallengesData() {
    this->bIsCompleted = false;
    this->bIsLocked = false;
    this->bHasIconOverride = false;
    this->Progress = 1;
    this->NumObjectivesCompleted = 0;
    this->NumObjectives = 0;
}

