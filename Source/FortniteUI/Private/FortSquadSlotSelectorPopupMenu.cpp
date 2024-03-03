#include "FortSquadSlotSelectorPopupMenu.h"

bool UFortSquadSlotSelectorPopupMenu::IsScreenWIFE() const {
    return false;
}

UFortSquadSlotSelectorButton* UFortSquadSlotSelectorPopupMenu::GetHostButton() const {
    return NULL;
}

UFortSquadSlotSelectorPopupMenu::UFortSquadSlotSelectorPopupMenu() {
    this->bReadOnlyModeWIFE = false;
}

