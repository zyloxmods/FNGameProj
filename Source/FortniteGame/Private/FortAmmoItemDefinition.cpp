#include "FortAmmoItemDefinition.h"

TSoftObjectPtr<UTexture2D> UFortAmmoItemDefinition::GetHUDAmmoSmallPreviewImage() const {
    return NULL;
}

UFortAmmoItemDefinition::UFortAmmoItemDefinition() {
    this->bTriggersFeedbackLines = false;
    this->WorldItemClassOverride = NULL;
    this->ItemOptions = NULL;
    this->ItemType = EFortItemType::Ammo;
}

