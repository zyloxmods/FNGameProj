#include "FortUpgradeScreenBase.h"

void UFortUpgradeScreenBase::UseUpgradesRespecToken() {
}

void UFortUpgradeScreenBase::TogglePreview() {
}

void UFortUpgradeScreenBase::RefreshFocus() {
}




bool UFortUpgradeScreenBase::IsPreviewing() const {
    return false;
}

void UFortUpgradeScreenBase::HandleTabSelected(FName TabId) {
}

int32 UFortUpgradeScreenBase::GetUpgradesRespecTokenCount() const {
    return 0;
}

bool UFortUpgradeScreenBase::CanPreview() const {
    return false;
}

bool UFortUpgradeScreenBase::AreUpgradesRespecTokensAvailable() const {
    return false;
}

UFortUpgradeScreenBase::UFortUpgradeScreenBase() {
    this->UpgradesTabSelector = NULL;
    this->UpgradesTileView = NULL;
    this->UpgradeTileViewLoadGuard = NULL;
    this->Details = NULL;
    this->UpgradesRespecToken = NULL;
}

