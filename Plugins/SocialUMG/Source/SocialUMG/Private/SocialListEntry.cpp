#include "SocialListEntry.h"

UWidget* USocialListEntry::HandleGetMenuContent() {
    return NULL;
}

USocialListEntry::USocialListEntry() {
    this->Text_DisplayName = NULL;
    this->Text_RichPresence = NULL;
    this->MenuAnchor_Actions = NULL;
}

