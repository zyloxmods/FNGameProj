#include "FortSocialSettingToggle.h"

void UFortSocialSettingToggle::HandleRotated(int32 SelectedIndex) {
}

UFortSocialSettingToggle::UFortSocialSettingToggle() : UUserWidget(FObjectInitializer::Get()) {
    this->Rotator_Text = NULL;
    this->Text_ParamName = NULL;
    this->Button_Left = NULL;
    this->Button_Right = NULL;
}

