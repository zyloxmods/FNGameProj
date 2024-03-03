#include "FortChatContainer.h"


bool UFortChatContainer::IsTextChatRestricted() const {
    return false;
}

UWidget* UFortChatContainer::HandleGetMenuContentForAnchor() {
    return NULL;
}

UFortChatContainer::UFortChatContainer() {
    this->CombinedChannel = NULL;
    this->ActionMenuClass = NULL;
    this->ActionMenu = NULL;
    this->MenuAnchor_MessageActions = NULL;
}

