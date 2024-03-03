#include "FortSafeZoneEditor.h"

void UFortSafeZoneEditor::SetChildSettingReference(UFortSetting* SettingReference) {
}

void UFortSafeZoneEditor::HandleDoneClicked() {
}

void UFortSafeZoneEditor::HandleBackClicked() {
}

UFortSafeZoneEditor::UFortSafeZoneEditor() {
    this->bCanCancel = true;
    this->Switcher_SafeZoneMessage = NULL;
    this->RichText_Default = NULL;
    this->RichText_SwitchHandheldWarning = NULL;
    this->Button_Back = NULL;
    this->Button_Done = NULL;
}

