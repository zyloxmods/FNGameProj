#include "HUDLayoutToolV2_Button.h"

UHUDLayoutToolV2_Button::UHUDLayoutToolV2_Button() {
    this->bIsToggleable = false;
    this->ButtonWidthOverride = 1;
    this->ButtonHeightOverride = 1;
    this->TextFontSize = 0;
    this->bMatchIconSize = false;
    this->bOverride_WidthOverride = false;
    this->bOverride_HeightOverride = false;
    this->bExternallyControlledStates = false;
    this->SizeBox_Control = NULL;
    this->Border_Container = NULL;
    this->Text_ButtonAction = NULL;
    this->Image_Icon = NULL;
    this->Image_Background = NULL;
}

