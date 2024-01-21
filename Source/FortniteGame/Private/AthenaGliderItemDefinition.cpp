#include "AthenaGliderItemDefinition.h"
#include "Templates/SubclassOf.h"

TSubclassOf<AFortPlayerParachute> UAthenaGliderItemDefinition::GetParachutePrefabClass() const {
    return NULL;
}

TSoftObjectPtr<USkeletalMesh> UAthenaGliderItemDefinition::GetOverrideSkelMeshPtr() const {
    return NULL;
}

TSoftClassPtr<UAnimInstance> UAthenaGliderItemDefinition::GetOverrideAnimSetPtr() const {
    return NULL;
}

UAthenaGliderItemDefinition::UAthenaGliderItemDefinition() {
    this->GliderType = EFortGliderType::Glider;
    this->bActivateTrailsOnRotationalMovement = true;
    this->TrailParamName = TEXT("Moving");
    ItemType = EFortItemType::AthenaGlider;
}

