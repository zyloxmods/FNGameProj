#include "FortFriendSearchButton.h"

void UFortFriendSearchButton::SetKeyboardFocusOnAddFriendText() {
}

void UFortFriendSearchButton::HandleAddFriendTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortFriendSearchButton::HandleAddFriendTextChanged(const FText& Text) {
}

UFortFriendSearchButton::UFortFriendSearchButton() {
    this->EditableText_AddFriend = NULL;
    this->RichText_SocialBanTimerText = NULL;
    this->Button_ClearQuery = NULL;
    this->Button_SubmitQuery = NULL;
    this->Switcher_SocialBan = NULL;
}

