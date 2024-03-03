#include "FortItemDetailElementWidget.h"











UFortItemDetailElementWidget::UFortItemDetailElementWidget() {
    this->bShouldPreviewUpgradingItem = false;
    this->UpgradeLevelDelta = 0;
    this->CurrentInspectMode = EFortItemInspectionMode::Overview;
    this->QuantityOverride = 0;
    this->bIsUpdatingSuspended = false;
}

