#include "FortSquadSlotSelectorButton.h"

void UFortSquadSlotSelectorButton::ViewInAll() {
}

void UFortSquadSlotSelectorButton::SquadSlotWidgetUpdated_Implementation() {
}

void UFortSquadSlotSelectorButton::SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex) {
}

void UFortSquadSlotSelectorButton::OpenSquadSlot() {
}

bool UFortSquadSlotSelectorButton::IsSquadSlotLockedBP() const {
    return false;
}



UWidget* UFortSquadSlotSelectorButton::GetPopupMenu() {
    return NULL;
}

bool UFortSquadSlotSelectorButton::GetInPreviewMode() const {
    return false;
}

void UFortSquadSlotSelectorButton::GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const {
}

UFortSquadSlotSelectorButton::UFortSquadSlotSelectorButton() {
    this->SquadSlotWidget = NULL;
    this->PopupMenuAnchor = NULL;
}

