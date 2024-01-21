#include "FortGadgetItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortGadgetItemDefinition::HasTrackedAttributes() const {
    return false;
}

bool UFortGadgetItemDefinition::HasChargeUp() const {
    return false;
}

UFortWeaponItemDefinition* UFortGadgetItemDefinition::GetWeaponItemDefinition() const {
    return NULL;
}

FGameplayAttribute UFortGadgetItemDefinition::GetLevelAttribute() const {
    return FGameplayAttribute{};
}

TSubclassOf<UFortGameplayAbility> UFortGadgetItemDefinition::GetGameplayAbility() const {
    return NULL;
}

UFortGadgetItemDefinition::UFortGadgetItemDefinition() {
    this->GadgetPriority = 0;
    this->bDestroyGadgetWhenTrackedAttributesIsZero = true;
    this->bHasChargeUp = false;
    this->bDropAllOnEquip = false;
    this->bCanChangePreviewImageDuringGame = false;
    this->bValidForLastEquipped = false;
    ItemType = EFortItemType::Gadget;
}

