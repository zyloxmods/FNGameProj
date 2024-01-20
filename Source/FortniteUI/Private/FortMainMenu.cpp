#include "FortMainMenu.h"

TSoftClassPtr<UUserWidget> UFortMainMenu::GetOutpostPermissionsWidgetClass() {
    return NULL;
}

UFortMainMenu::UFortMainMenu() {
    this->Text_CountDownTimer = NULL;
    this->LeaveButton = NULL;
    this->Button_MobileBack = NULL;
    this->ContextualHelpText = NULL;
}

