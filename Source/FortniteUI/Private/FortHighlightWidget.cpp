#include "FortHighlightWidget.h"


UFortHighlightWidget::UFortHighlightWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisableHighlightNotification = false;
    this->Text_Header = NULL;
    this->Text_Description = NULL;
}

