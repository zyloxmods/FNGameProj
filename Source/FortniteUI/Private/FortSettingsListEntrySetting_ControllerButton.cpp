#include "FortSettingsListEntrySetting_ControllerButton.h"


UWidget* UFortSettingsListEntrySetting_ControllerButton::GetPopupMenu() {
    return NULL;
}

UFortSettingsListEntrySetting_ControllerButton::UFortSettingsListEntrySetting_ControllerButton() {
    this->BindingMenuClass = NULL;
    this->ControllerInputSetting = NULL;
    this->Key_ControllerButton = NULL;
    this->Button_ControllerAction = NULL;
    this->MenuAnchor_BindableActions = NULL;
}

