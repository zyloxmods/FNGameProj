#include "FortGameplayAbility_AITurnTransition.h"

void UFortGameplayAbility_AITurnTransition::GetTurnTransitionMontageSectionNameAndYawRotationRate(FName& MontageSectionName, float& TurnYawRotationRate) const {
}

UFortGameplayAbility_AITurnTransition::UFortGameplayAbility_AITurnTransition() {
    this->MinTurnTransitionYawAngle = 45.00f;
    this->PickedTurnYawRotationRate = 0.00f;
}

