#include "FortAthenaAIBotPathFollowingComponent.h"

UFortAthenaAIBotPathFollowingComponent::UFortAthenaAIBotPathFollowingComponent() {
    this->BotController = NULL;
    this->HitBuilding = NULL;
    this->CachedUnstuckSkillSet = NULL;
    this->CachedMovementSkillSet = NULL;
}

