#include "PetSyncedDanceItemDefinition.h"

TSoftObjectPtr<UAnimMontage> UPetSyncedDanceItemDefinition::GetPetAnimation(const UAthenaPetItemDefinition* PetItemDef) const {
    return NULL;
}

UPetSyncedDanceItemDefinition::UPetSyncedDanceItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
}

