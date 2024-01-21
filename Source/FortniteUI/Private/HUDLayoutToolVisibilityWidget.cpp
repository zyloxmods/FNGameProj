#include "HUDLayoutToolVisibilityWidget.h"


void UHUDLayoutToolVisibilityWidget::OnWidgetSelected(UHUDLayoutToolPlacementWidget* NewlySelectedWidget) {
}

void UHUDLayoutToolVisibilityWidget::OnEditClicked() {
}

void UHUDLayoutToolVisibilityWidget::OnCreativeClicked() {
}

void UHUDLayoutToolVisibilityWidget::OnCombatClicked() {
}

void UHUDLayoutToolVisibilityWidget::OnBuildClicked() {
}

void UHUDLayoutToolVisibilityWidget::GetVisibilities(EBacchusHUDStateType& CombatVisibility, EBacchusHUDStateType& BuildVisibility, EBacchusHUDStateType& EditVisibility, EBacchusHUDStateType& CreativeVisibility) const {
}

UHUDLayoutToolVisibilityWidget::UHUDLayoutToolVisibilityWidget() {
    this->CombatVisibilityButton = NULL;
    this->BuildVisibilityButton = NULL;
    this->EditVisibilityButton = NULL;
    this->CreativeVisibilityButton = NULL;
}

