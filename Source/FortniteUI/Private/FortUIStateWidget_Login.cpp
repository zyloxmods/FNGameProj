#include "FortUIStateWidget_Login.h"


FText UFortUIStateWidget_Login::GetPlatformDisplayName() const {
    return FText::GetEmpty();
}

UFortUIStateWidget_Login::UFortUIStateWidget_Login() {
    this->Button_Cancel = NULL;
    this->ActionBar_Bottom = NULL;
    this->Switcher_ScreenContents = NULL;
    this->Editor_SafeZone = NULL;
    this->Status_LoginInfo = NULL;
    this->Splash_Screen = NULL;
    this->Login_Interactions = NULL;
    this->HealthWarningScreen_HealthInfo = NULL;
}

