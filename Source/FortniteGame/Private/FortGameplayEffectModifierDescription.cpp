#include "FortGameplayEffectModifierDescription.h"

FFortGameplayEffectModifierDescription::FFortGameplayEffectModifierDescription() {
    bIsBuff = false;
    MagnitudeFormat = EFortAttributeDisplay::BasicInt;
    DisplayType = EFortStatDisplayType::Category;
    Magnitude = 1;
}

