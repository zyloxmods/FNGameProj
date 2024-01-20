#include "FortHeroLoadoutSlotButton.h"

bool UFortHeroLoadoutSlotButton::IsContextMenuOpen() const {
    return false;
}

void UFortHeroLoadoutSlotButton::HandleMenuOpenChanged(bool bIsMenuOpen) {
}

UFortHeroLoadoutSlotButton::UFortHeroLoadoutSlotButton() {
    this->SlotIndex = 0;
    this->SlotType = EHeroLoadoutSlotType::CommanderSlot;
    this->ContextMenuAnchor = NULL;
}

