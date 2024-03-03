#include "BacchusPluginContentWidget.h"

void UBacchusPluginContentWidget::OnPluginHUDWidgetRemoved(FGameplayTag WidgetTag) {
}

void UBacchusPluginContentWidget::OnPluginHUDWidgetAdded(FGameplayTag WidgetTag, TSoftClassPtr<UWidget> SoftWidgetClass) {
}

UBacchusPluginContentWidget::UBacchusPluginContentWidget() {
    this->MyOverlay = NULL;
}

