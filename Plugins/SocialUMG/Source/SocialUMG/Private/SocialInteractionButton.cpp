#include "SocialInteractionButton.h"


bool USocialInteractionButton::IsPlatformOnlyFriend() const {
    return false;
}

FName USocialInteractionButton::GetInteractionName() const {
    return NAME_None;
}

USocialInteractionButton::USocialInteractionButton() {
    this->Text_InteractionName = NULL;
    this->Border_InteractionIndicator = NULL;
}

