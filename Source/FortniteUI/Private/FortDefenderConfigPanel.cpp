#include "FortDefenderConfigPanel.h"

bool UFortDefenderConfigPanel::UnsummonDefender() const {
    return false;
}

bool UFortDefenderConfigPanel::SpawnDefender() const {
    return false;
}

bool UFortDefenderConfigPanel::IsWeaponSelectionValid() const {
    return false;
}

bool UFortDefenderConfigPanel::HasWeaponForSelectedDefender() const {
    return false;
}

bool UFortDefenderConfigPanel::HasAnyDefenders() const {
    return false;
}

UFortSchematicItemDefinition* UFortDefenderConfigPanel::GetSourceSchematic(const UFortWorldItemDefinition* ItemDefUsedForCrafting) const {
    return NULL;
}

AFortAIPawn* UFortDefenderConfigPanel::GetSelectedDefenderPawn() const {
    return NULL;
}

UFortWorldItem* UFortDefenderConfigPanel::GetDefenderPawnWeaponItem(const AFortAIPawn* DefenderPawn) const {
    return NULL;
}

UFortWorldItemDefinition* UFortDefenderConfigPanel::GetCompatibleAmmoDef() const {
    return NULL;
}

UFortWorldItem* UFortDefenderConfigPanel::GetCompatibleAmmo() const {
    return NULL;
}

int32 UFortDefenderConfigPanel::GetAmmoCountFromPlayer(const UFortWorldItemDefinition* AmmoItemDef) const {
    return 0;
}

int32 UFortDefenderConfigPanel::GetAmmoCountFromDefender(const UFortWorldItemDefinition* AmmoItemDef) const {
    return 0;
}

UFortDefenderConfigPanel::UFortDefenderConfigPanel() {
    this->SelectedAmmoQuantity = 0;
}

