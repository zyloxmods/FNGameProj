#include "FortAthenaLocalGameplayBehavior.h"



void AFortAthenaLocalGameplayBehavior::FinishExecute() {
}

AFortAthenaLocalGameplayBehavior::AFortAthenaLocalGameplayBehavior() {
    this->bNeedToAwakeDuringExecution = false;
    this->CachedTask = NULL;
}

