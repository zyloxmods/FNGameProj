#include "DeployableBaseCore.h"

FTransform ADeployableBaseCore::GetSimpleDeathFXTransform_Implementation() const {
    return FTransform{};
}

ADeployableBaseCore::ADeployableBaseCore() {
    Plot = NULL;
    bRegisterAsGlobalGameplayEventListener = false;
}

