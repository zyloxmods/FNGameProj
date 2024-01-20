#include "SocialChatMessageEntry.h"


bool USocialChatMessageEntry::CanInteract() const {
    return false;
}

USocialChatMessageEntry::USocialChatMessageEntry() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_Message = NULL;
    this->Text_SenderName = NULL;
    this->Text_ChannelName = NULL;
    this->Text_Timestamp = NULL;
    this->HorizontalBox_Header = NULL;
    this->Button_MessageButton = NULL;
}

