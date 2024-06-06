#include "FortAthenaMutator_ItemDropOnDeath.h"

AFortAthenaMutator_ItemDropOnDeath::AFortAthenaMutator_ItemDropOnDeath() {
    RespawnRequirements = ERespawnRequirements::RespawnOnly;
    bShouldNonParticipantAIAlsoDropItems = false;
}

