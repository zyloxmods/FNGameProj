#include "ActiveGameplayModifierArray.h"

FActiveGameplayModifierArray::FActiveGameplayModifierArray() {
    this->ModifierHandleGenerator = 0;
    this->bSupportRuntimeModifierShutdown = false;
}

