#include "FortGameplayModifierItemDefinition.h"

bool UFortGameplayModifierItemDefinition::IsHiddenInUI() const {
    return false;
}

UFortGameplayModifierItemDefinition::UFortGameplayModifierItemDefinition() {
    this->bHiddenInUI = false;
}

