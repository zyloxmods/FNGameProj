#include "SocialInteractionMenu.h"


UWidget* USocialInteractionMenu::GetFirstEntryToCenter() const {
    return NULL;
}

USocialInteractionMenu::USocialInteractionMenu() {
    this->EntryBox_PositiveInteractions = NULL;
    this->EntryBox_NegativeInteractions = NULL;
    this->Spacer_InteractionSeparator = NULL;
    this->Switcher_Confirmation = NULL;
    this->Text_ConfirmationLabel = NULL;
    this->Button_Confirm = NULL;
    this->Button_Decline = NULL;
}

