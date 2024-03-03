#include "FortHUDCenterPopupMessageWidget.h"

void UFortHUDCenterPopupMessageWidget::UpdateState() {
}


ECenterPopupMessageStateEnum UFortHUDCenterPopupMessageWidget::GetCenterPopupMessageState() const {
    return ECenterPopupMessageStateEnum::NotVisible;
}

UFortHUDCenterPopupMessageWidget::UFortHUDCenterPopupMessageWidget() {
    this->CenterPopupModalWidget = NULL;
}

