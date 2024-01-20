#include "DeployableBaseCore.h"

FTransform ADeployableBaseCore::GetSimpleDeathFXTransform_Implementation() const {
    return FTransform{};
}

ADeployableBaseCore::ADeployableBaseCore() {
    this->Plot = NULL;
    this->bRegisterAsGlobalGameplayEventListener = false;
}

