#include "FortContextualTutorialDefinition_Consumable.h"

UFortContextualTutorialDefinition_Consumable::UFortContextualTutorialDefinition_Consumable() {
    RequirementsCheckDelay = 1;
    bUseHealthRequirements = false;
    HealthRequirements = 1;
    bUseShieldRequirements = false;
    ShieldRequirements = 1;
    bUseCommitedCallback = true;
    bUseActivatedCallback = false;
}

