#include "FortHUDTagPromptContainerWidget.h"

void UFortHUDTagPromptContainerWidget::RequestPromptDataActivation(const FFortHUDTagPromptData& PromptData, const FGameplayTag& Tag) {
}

void UFortHUDTagPromptContainerWidget::OpenWidget(const FFortHUDTagPromptData& PrompData) {
}

void UFortHUDTagPromptContainerWidget::OnWidgetBaseOpenedOrClosed(bool bNewlyOpened) {
}

void UFortHUDTagPromptContainerWidget::CloseWidget() {
}

UFortHUDTagPromptContainerWidget::UFortHUDTagPromptContainerWidget() {
    this->TagMappingData = NULL;
    this->CoolDownTime = 1;
    this->OverlayWidget = NULL;
}

