#include "FortAmmoItemDefinition.h"

TSoftObjectPtr<UTexture2D> UFortAmmoItemDefinition::GetHUDAmmoSmallPreviewImage() const {
    return NULL;
}

UFortAmmoItemDefinition::UFortAmmoItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bTriggersFeedbackLines = false;
    WorldItemClassOverride = NULL;
    ItemOptions = NULL;
    ItemType = EFortItemType::Ammo;
}

