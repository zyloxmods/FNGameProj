#include "FortConsumableAccountItemDefinition.h"

UFortConsumableAccountItemDefinition::UFortConsumableAccountItemDefinition() {
    this->bCanActivateOnSelf = true;
    this->bCanActivateOnOthers = false;
    this->bIsAutomaticallyConsumed = false;
    this->ProfileType = EItemProfileType::Campaign;
}

