#include "FortEditableFilteredCountedTextBox.h"

void UFortEditableFilteredCountedTextBox::SetEntryCharLimit_Implementation(int32 InCharLimit) {
}


void UFortEditableFilteredCountedTextBox::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortEditableFilteredCountedTextBox::HandleTextChanged(const FText& Text) {
}

UFortEditableFilteredCountedTextBox::UFortEditableFilteredCountedTextBox() : UUserWidget(FObjectInitializer::Get()) {
    this->EntryCharLimit = 0;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->EnforcedEntryCharLimit = 0;
    this->bReplaceUserTextWithSanitizedString = true;
    this->bAllowSanitizedStrings = false;
    this->bUseToxicityServiceSanitization = false;
    this->EditText = NULL;
    this->Text_CharCount = NULL;
}

