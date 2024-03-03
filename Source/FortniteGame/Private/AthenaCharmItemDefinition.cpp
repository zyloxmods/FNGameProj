#include "AthenaCharmItemDefinition.h"
#include "Templates/SubclassOf.h"

TSoftClassPtr<UAnimInstance> UAthenaCharmItemDefinition::GetOverrideWeaponAnimSetPtr() const {
    return NULL;
}

TSoftObjectPtr<USkeletalMesh> UAthenaCharmItemDefinition::GetOverrideSkelMeshPtr() const {
    return NULL;
}

TSoftClassPtr<UAnimInstance> UAthenaCharmItemDefinition::GetOverrideAnimSetPtrForCharmSlot(const int32 CharmSlotIn) const {
    return NULL;
}

TSoftClassPtr<UAnimInstance> UAthenaCharmItemDefinition::GetOverrideAnimSetPtr() const {
    return NULL;
}

TSubclassOf<AFortPlayerCharm> UAthenaCharmItemDefinition::GetCharmPrefabClass() const {
    return NULL;
}

UAthenaCharmItemDefinition::UAthenaCharmItemDefinition() {
    this->ItemType = EFortItemType::AthenaCharmCosmetic;
}

