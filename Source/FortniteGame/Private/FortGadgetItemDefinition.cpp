#include "FortGadgetItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortGadgetItemDefinition::HasTrackedAttributes() const {
    return false;
}

bool UFortGadgetItemDefinition::HasChargeUp() const {
    return false;
}

UFortWeaponItemDefinition* UFortGadgetItemDefinition::GetWeaponItemDefinition()const{
    return NULL;
}

FGameplayAttribute UFortGadgetItemDefinition::GetLevelAttribute() const {
    return FGameplayAttribute{};
}

TSubclassOf<UFortGameplayAbility> UFortGadgetItemDefinition::GetGameplayAbility() const {
    return NULL;
}

UFortGadgetItemDefinition::UFortGadgetItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    GadgetPriority = 0;
    bDestroyGadgetWhenTrackedAttributesIsZero = true;
    bHasChargeUp = false;
    bDropAllOnEquip = false;
    bCanChangePreviewImageDuringGame = false;
    bValidForLastEquipped = false;
    ItemType = EFortItemType::Gadget;
}