#include "FortErrorWindow.h"


UFortErrorWindow::UFortErrorWindow() {
    this->CommonText_Title = NULL;
    this->CommonText_MainError = NULL;
    this->ScrollBox_MainError = NULL;
    this->TextBlock_MainErrorCode = NULL;
    this->TextBlock_OverflowErrorCodes = NULL;
    this->WidgetSwitcher_SeverityImage = NULL;
    this->Image_Mild = NULL;
    this->Image_Severe = NULL;
    this->CommonButton_Close = NULL;
    this->MaxOverflowErrorCodes = 0;
}

