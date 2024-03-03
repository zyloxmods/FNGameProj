#include "OstrichFinaleWidget.h"







UOstrichFinaleWidget::UOstrichFinaleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->DestructDisplayUpdateFrequency = 1;
    this->FinishBroadcastOffset = 1;
    this->OwningVehicle = NULL;
}

