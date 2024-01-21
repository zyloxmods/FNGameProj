#include "AthenaPetItemDefinition.h"
#include "Templates/SubclassOf.h"

TSubclassOf<AFortPlayerPet> UAthenaPetItemDefinition::GetPetPrefabClass() const {
    return NULL;
}

UAthenaPetItemDefinition::UAthenaPetItemDefinition() {
    ItemType = EFortItemType::AthenaPetCosmetic;
}

