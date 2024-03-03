#include "FortContextualTutorialDefinition_Consumable.h"

UFortContextualTutorialDefinition_Consumable::UFortContextualTutorialDefinition_Consumable() {
    this->RequirementsCheckDelay = 1;
    this->bUseHealthRequirements = false;
    this->HealthRequirements = 1;
    this->bUseShieldRequirements = false;
    this->ShieldRequirements = 1;
    this->bUseCommitedCallback = true;
    this->bUseActivatedCallback = false;
}

