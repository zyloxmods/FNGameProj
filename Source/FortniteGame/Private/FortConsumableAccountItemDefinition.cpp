#include "FortConsumableAccountItemDefinition.h"

UFortConsumableAccountItemDefinition::UFortConsumableAccountItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bCanActivateOnSelf = true;
    bCanActivateOnOthers = false;
    bIsAutomaticallyConsumed = false;
    ProfileType = EItemProfileType::Common;
    ItemType = EFortItemType::ConsumableAccountItem;
}

