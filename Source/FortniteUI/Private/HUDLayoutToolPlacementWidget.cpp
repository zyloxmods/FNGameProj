#include "HUDLayoutToolPlacementWidget.h"

void UHUDLayoutToolPlacementWidget::ResetIfMandatoryOffScreen() {
}

void UHUDLayoutToolPlacementWidget::OnWidgetSelected(UHUDLayoutToolPlacementWidget* InSelectedWidget) {
}


void UHUDLayoutToolPlacementWidget::OnLayoutVisibilityChanged(bool bShowCombat, bool bShowBuild, bool bShowEdit, bool bShowCreative) {
}

void UHUDLayoutToolPlacementWidget::OnInsideGridStateChange_Implementation(bool bInsideGrid) {
}

bool UHUDLayoutToolPlacementWidget::IsInsideGrid() const {
    return false;
}

bool UHUDLayoutToolPlacementWidget::GetIsOverlapping_Implementation() const {
    return false;
}

bool UHUDLayoutToolPlacementWidget::CanEditVisibility() const {
    return false;
}

FGameplayTag UHUDLayoutToolPlacementWidget::BP_GetMobileVisualType_Implementation() const {
    return FGameplayTag{};
}

UHUDLayoutToolPlacementWidget::UHUDLayoutToolPlacementWidget() {
    this->bCanMoveWidget = true;
    this->HUDElementClass = NULL;
    this->bIsBlockingWidget = false;
    this->bIsMandatoryOnScreen = false;
    this->SelectionBorder = NULL;
    this->DisplayScaleBorder = NULL;
    this->MainOverlay = NULL;
    this->bCanEditVisibilityOverride = true;
    this->Property_0 = 1.00f;
    this->Property_1 = 1.00f;
    this->Property_2 = 1.00f;
    this->Property_3 = 1.00f;
    this->BacchusHUDElement = NULL;
}

