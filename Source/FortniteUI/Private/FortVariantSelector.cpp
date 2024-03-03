#include "FortVariantSelector.h"

void UFortVariantSelector::HandleItemSelected(UCommonButton* AssociatedButton, int32 ButtonIndex) {
}

void UFortVariantSelector::HandleItemHovered(UCommonButton* AssociatedButton, int32 ButtonIndex) {
}

UFortVariantSelector::UFortVariantSelector() {
    this->EntryBox_VariantOptions = NULL;
    this->Text_VariantName = NULL;
    this->CurrentSelectedVariant = NULL;
    this->Tile_ButtonGroup = NULL;
}

