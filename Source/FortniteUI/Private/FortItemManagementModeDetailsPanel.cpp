#include "FortItemManagementModeDetailsPanel.h"



EFortItemManagementMode UFortItemManagementModeDetailsPanel::GetItemManagementMode() const {
    return EFortItemManagementMode::Details;
}

UFortItemManagementModeDetailsPanel::UFortItemManagementModeDetailsPanel() {
    this->ModeWidgetSwitcher = NULL;
    this->DetailsModeItemDetailsPanel = NULL;
    this->ComparisonModeItemDetailsPanel = NULL;
    this->MulchModeItemDetailsPanel = NULL;
}

