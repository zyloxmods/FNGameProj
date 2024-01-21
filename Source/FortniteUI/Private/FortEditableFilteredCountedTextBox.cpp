#include "FortEditableFilteredCountedTextBox.h"


void UFortEditableFilteredCountedTextBox::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommittMethod) {
}

void UFortEditableFilteredCountedTextBox::HandleTextChanged(const FText& Text) {
}

UFortEditableFilteredCountedTextBox::UFortEditableFilteredCountedTextBox() : UUserWidget(FObjectInitializer::Get()) {
    this->EntryCharLimit = 150;
    this->EditText = NULL;
    this->Text_CharCount = NULL;
}

