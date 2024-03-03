#include "FortItemCooldownWidget.h"

void UFortItemCooldownWidget::TryStartUpdateCooldown_BP() {
}

void UFortItemCooldownWidget::SetItem(const UFortWorldItem* InWorldItem) {
}

void UFortItemCooldownWidget::OnWorldItemDestroyed() {
}





UFortItemCooldownWidget::UFortItemCooldownWidget() {
    this->CooldownText = NULL;
    this->CooldownImage = NULL;
    this->CooldownChargingImage = NULL;
    this->CooldownPercentageMID = NULL;
    this->bAmmoRegenAvailableState = true;
}

