#include "AthenaPetItemDefinition.h"
#include "Templates/SubclassOf.h"

TSubclassOf<AFortPlayerPet> UAthenaPetItemDefinition::GetPetPrefabClass() const {
    return NULL;
}

UAthenaPetItemDefinition::UAthenaPetItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    PetAttachRule = EAthenaPetAttachRule::AttachToBackpack;
}

