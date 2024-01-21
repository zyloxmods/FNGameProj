#include "FortCollectionBookItemPopupMenu.h"



UFortCollectionBookSlotButton* UFortCollectionBookItemPopupMenu::GetHostButton() const {
    return NULL;
}

bool UFortCollectionBookItemPopupMenu::CanItemBeUnslotted() {
    return false;
}

bool UFortCollectionBookItemPopupMenu::CanItemBePurchased() {
    return false;
}

UFortCollectionBookItemPopupMenu::UFortCollectionBookItemPopupMenu() {
}

