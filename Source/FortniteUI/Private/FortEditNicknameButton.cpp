#include "FortEditNicknameButton.h"

void UFortEditNicknameButton::SetKeyboardFocusOnEditableText() {
}

void UFortEditNicknameButton::HandleNicknameTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortEditNicknameButton::HandleNicknameTextChanged(const FText& Text) {
}

UFortEditNicknameButton::UFortEditNicknameButton() {
    this->EditableText_EditNickname = NULL;
    this->RichText_CharacterCounter = NULL;
}

