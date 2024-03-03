#include "AthenaConfirmationWindow.h"


FEventReply UAthenaConfirmationWindow::HandleTapToCloseZoneMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

UAthenaConfirmationWindow::UAthenaConfirmationWindow() {
    this->Text_Title = NULL;
    this->RichText_Description = NULL;
    this->Image_MainIcon = NULL;
    this->EntryBox_Buttons = NULL;
    this->Button_Close = NULL;
    this->Border_TapToCloseZone = NULL;
}

