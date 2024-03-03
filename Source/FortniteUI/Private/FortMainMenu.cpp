#include "FortMainMenu.h"


TSoftClassPtr<UUserWidget> UFortMainMenu::GetOutpostPermissionsWidgetClass() {
    return NULL;
}

UFortMainMenu::UFortMainMenu() {
    this->Text_CountDownTimer = NULL;
    this->Button_MobileBack = NULL;
    this->LeaveButton = NULL;
    this->ContextualHelpText = NULL;
}

