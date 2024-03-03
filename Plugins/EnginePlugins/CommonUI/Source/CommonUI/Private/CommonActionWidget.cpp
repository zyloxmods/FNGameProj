#include "CommonActionWidget.h"

void UCommonActionWidget::SetInputActions(TArray<FDataTableRowHandle> NewInputActions) {
}

void UCommonActionWidget::SetInputAction(FDataTableRowHandle InputActionRow) {
}

void UCommonActionWidget::SetIconRimBrush(FSlateBrush InIconRimBrush) {
}

bool UCommonActionWidget::IsHeldAction() const {
    return false;
}

FSlateBrush UCommonActionWidget::GetIcon() const {
    return FSlateBrush{};
}

FText UCommonActionWidget::GetDisplayText() const {
    return FText::GetEmpty();
}

UCommonActionWidget::UCommonActionWidget() {
    this->ProgressDynamicMaterial = NULL;
}

