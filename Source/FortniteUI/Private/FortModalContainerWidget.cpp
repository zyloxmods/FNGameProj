#include "FortModalContainerWidget.h"

UFortModalContainerWidget::UFortModalContainerWidget() {
    this->SizeConstraint = EModalContainerSize::ExtraSmall;
    this->DefaultSizeEntries.AddDefaulted(4);
    this->OverrideSizeEntries = NULL;
    this->TopContent = NULL;
    this->MiddleContent = NULL;
    this->BottomContent = NULL;
    this->BackgroudContent = NULL;
}

