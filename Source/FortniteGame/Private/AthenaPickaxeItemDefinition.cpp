#include "AthenaPickaxeItemDefinition.h"

UAthenaPickaxeItemDefinition::UAthenaPickaxeItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    WeaponDefinition = NULL;
    MainMeshAttachmentSocketName = TEXT("pack");
    OffhandMeshAttachmentSocketName = TEXT("pack");
}

