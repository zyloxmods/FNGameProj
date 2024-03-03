#include "FortGameplayEffectModifierDescription.h"

FFortGameplayEffectModifierDescription::FFortGameplayEffectModifierDescription() {
    this->bIsBuff = false;
    this->MagnitudeFormat = EFortAttributeDisplay::BasicInt;
    this->DisplayType = EFortStatDisplayType::Category;
    this->Magnitude = 1;
}

