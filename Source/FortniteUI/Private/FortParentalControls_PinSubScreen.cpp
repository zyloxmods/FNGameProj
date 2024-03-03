#include "FortParentalControls_PinSubScreen.h"

void UFortParentalControls_PinSubScreen::HandleEnterPinTextChanged(const FText& InText) {
}

UFortParentalControls_PinSubScreen::UFortParentalControls_PinSubScreen() {
    this->Button_SubmitPin = NULL;
    this->Text_Pin_FailReason = NULL;
    this->EditableText_Pin_Entry = NULL;
    this->EditableText_Pin_SecondEntry = NULL;
}

