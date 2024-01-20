#include "FortAmmoItemDefinition.h"

TSoftObjectPtr<UTexture2D> UFortAmmoItemDefinition::GetHUDAmmoSmallPreviewImage() const {
    return NULL;
}

UFortAmmoItemDefinition::UFortAmmoItemDefinition() {
    this->bIsConsumed = true;
    this->bTriggersFeedbackLines = false;
}

