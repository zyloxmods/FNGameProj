#include "InfiltrationPerkSelectContainerWidget.h"

bool UInfiltrationPerkSelectContainerWidget::PerkSelectionEnabled() const {
    return false;
}

void UInfiltrationPerkSelectContainerWidget::OnPanelDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

void UInfiltrationPerkSelectContainerWidget::OnPanelActivated(UCommonActivatablePanel* ActivatedPanel) {
}

UInfiltrationPerkSelectContainerWidget::UInfiltrationPerkSelectContainerWidget() {
    this->PerkPanelClass = NULL;
}

