#include "CommonLazyWidget.h"

void UCommonLazyWidget::SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget) {
}

bool UCommonLazyWidget::IsLoading() const {
    return false;
}

UCommonLazyWidget::UCommonLazyWidget() {
    this->Content = NULL;
}

