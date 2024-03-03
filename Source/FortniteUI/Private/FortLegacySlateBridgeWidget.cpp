#include "FortLegacySlateBridgeWidget.h"

void UFortLegacySlateBridgeWidget::UpdateSlateWidget(EFortLegacySlateWidget SlateWidgetType) {
}

void UFortLegacySlateBridgeWidget::SetOnCloseHandler(const FOnCloseLegacyWidget& OnCloseHandler) {
}

UFortLegacySlateBridgeWidget::UFortLegacySlateBridgeWidget() {
    this->ContainedWidgetType = EFortLegacySlateWidget::None;
    this->DPIScaleFactor = 1;
}

