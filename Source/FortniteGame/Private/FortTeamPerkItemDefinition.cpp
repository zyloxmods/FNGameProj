#include "FortTeamPerkItemDefinition.h"

bool UFortTeamPerkItemDefinition::HasProgressiveBonus() const {
    return false;
}

UFortAbilityKit* UFortTeamPerkItemDefinition::GetAbilityKitBP() const {
    return NULL;
}

UFortTeamPerkItemDefinition::UFortTeamPerkItemDefinition() {
    this->bProgressiveBonus = false;
}

