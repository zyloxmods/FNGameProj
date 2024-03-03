#include "FortItemAutoMulchActivatablePanel.h"

void UFortItemAutoMulchActivatablePanel::SetItemManagementScreen(UFortItemManagementScreen* InItemManagementScreen) {
}

void UFortItemAutoMulchActivatablePanel::SaveSettings() {
}

void UFortItemAutoMulchActivatablePanel::RestoreAutoMulchSettings() {
}

TArray<EFortAutoMulchCategory> UFortItemAutoMulchActivatablePanel::GetMulchCategoriesForInventoryFilter() const {
    return TArray<EFortAutoMulchCategory>();
}

EFortFrontendInventoryFilter UFortItemAutoMulchActivatablePanel::GetFrontendInventoryFilter() const {
    return EFortFrontendInventoryFilter::Schematics;
}

void UFortItemAutoMulchActivatablePanel::EnterMulchModeForAutoMulch() {
}

void UFortItemAutoMulchActivatablePanel::CacheAutoMulchSettings() {
}

UFortItemAutoMulchActivatablePanel::UFortItemAutoMulchActivatablePanel() {
}

