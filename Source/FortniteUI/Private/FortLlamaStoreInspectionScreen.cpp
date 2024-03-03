#include "FortLlamaStoreInspectionScreen.h"

bool UFortLlamaStoreInspectionScreen::IsItemChoicePack(UObject* ItemToCheck) const {
    return false;
}

UFortCardPackItem* UFortLlamaStoreInspectionScreen::GetSelectedCardPack() const {
    return NULL;
}

EInputActionState UFortLlamaStoreInspectionScreen::GetInspectChoiceInputState() const {
    return EInputActionState::Enabled;
}

UFortLlamaStoreInspectionScreen::UFortLlamaStoreInspectionScreen() {
    this->GrantedItemTileView = NULL;
    this->bIsInChoiceViewMode = false;
}

