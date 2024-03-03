#include "SocialGroupListEntry.h"

UWidget* USocialGroupListEntry::HandleGetMenuContent() {
    return NULL;
}

USocialGroupListEntry::USocialGroupListEntry() {
    this->ActionMenuClass = NULL;
    this->SocialGroup = NULL;
    this->Text_GroupName = NULL;
    this->MenuAnchor_Actions = NULL;
}

