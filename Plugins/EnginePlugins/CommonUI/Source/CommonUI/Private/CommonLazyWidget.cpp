#include "CommonLazyWidget.h"

void UCommonLazyWidget::SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget) {
}

bool UCommonLazyWidget::IsLoading() const {
    return false;
}

UUserWidget* UCommonLazyWidget::GetContent() const {
    return NULL;
}

UCommonLazyWidget::UCommonLazyWidget() {
    this->Content = NULL;
}

