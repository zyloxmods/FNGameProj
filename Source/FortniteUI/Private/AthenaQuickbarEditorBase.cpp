#include "AthenaQuickbarEditorBase.h"


UWidget* UAthenaQuickbarEditorBase::GetFirstEquipSlotButton() const {
    return NULL;
}

void UAthenaQuickbarEditorBase::DeselectAllButtons() {
}

UAthenaQuickbarEditorBase::UAthenaQuickbarEditorBase() {
    this->EquipButtonGroup = NULL;
    this->bCheckVisibilityBasedOffInventoryCapacity = false;
}

