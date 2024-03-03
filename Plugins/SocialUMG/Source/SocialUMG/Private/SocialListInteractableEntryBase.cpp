#include "SocialListInteractableEntryBase.h"

void USocialListInteractableEntryBase::HandleMenuOpenChanged(bool bIsMenuOpen) {
}

UWidget* USocialListInteractableEntryBase::HandleGetMenuContent() {
    return NULL;
}

USocialListInteractableEntryBase::USocialListInteractableEntryBase() {
    this->ActionMenuClass = NULL;
    this->MenuAnchor_Actions = NULL;
}

