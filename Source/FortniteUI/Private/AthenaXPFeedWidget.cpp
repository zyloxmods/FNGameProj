#include "AthenaXPFeedWidget.h"


void UAthenaXPFeedWidget::OnXPEvent(const FXPUIEvent& XPEvent) {
}

void UAthenaXPFeedWidget::OnForwardedXPEvent(const FXPUIEvent& XPEvent) {
}

UAthenaXPFeedWidget::UAthenaXPFeedWidget() {
    this->VertBox = NULL;
    this->EntryWidgetClass = NULL;
    this->MaxNumOfEntries = 0;
}

