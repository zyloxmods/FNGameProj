#include "SocialChatMessageEntry.h"


bool USocialChatMessageEntry::CanInteract() const {
    return false;
}

USocialChatMessageEntry::USocialChatMessageEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->RichText_Message = NULL;
    this->Button_MessageButton = NULL;
}

