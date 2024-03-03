#include "CommonUserWidget.h"

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput) {
}

UCommonUserWidget::UCommonUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bConsumePointerInput = false;
}

