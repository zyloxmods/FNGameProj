#include "FortTeamPerkItemDefinition.h"

bool UFortTeamPerkItemDefinition::HasProgressiveBonus() const {
    return false;
}

UFortAbilityKit* UFortTeamPerkItemDefinition::GetAbilityKitBP() const {
    return NULL;
}

UFortTeamPerkItemDefinition::UFortTeamPerkItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bProgressiveBonus = false;
}

