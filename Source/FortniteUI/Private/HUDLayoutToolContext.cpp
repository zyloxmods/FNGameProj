#include "HUDLayoutToolContext.h"

void UHUDLayoutToolContext::StartLerping(FVector2D NewViewOffset) {
}

bool UHUDLayoutToolContext::ShouldShowSelectedWidgetProperties() const {
    return false;
}

void UHUDLayoutToolContext::SetSelectedWidget(UHUDLayoutToolPlacementWidget* NewSelectedWidget) {
}

void UHUDLayoutToolContext::SetPropertyMenuState(bool bNewlyOpen) {
}

void UHUDLayoutToolContext::SetLayoutVisibility(const bool bShowCombat, const bool bShowBuild, const bool bShowEdit, const bool bShowCreative) {
}

void UHUDLayoutToolContext::SetFireModeOpenState(bool bNewlyOpened) {
}

void UHUDLayoutToolContext::SetFireMode(EFireModeType NewFireMode) {
}

void UHUDLayoutToolContext::SetCustomFireMode(bool bAutofireEnabled, bool bForceTouchEnabled, bool bTapToShootEnabled, bool bAlwaysShowDedicatedButton) {
}

void UHUDLayoutToolContext::SaveLayout(ELayoutDataType LayoutType, const FString& Reason) {
}

void UHUDLayoutToolContext::ResetSelectedWidgetProperties() {
}

void UHUDLayoutToolContext::ResetDirtyWidgets() {
}

void UHUDLayoutToolContext::ResetAllWidgets() {
}

void UHUDLayoutToolContext::OnViewOffsetUpdated() {
}

void UHUDLayoutToolContext::OnToolOpened(const FString& Reason) {
}

void UHUDLayoutToolContext::OnRecenterPressed() {
}

void UHUDLayoutToolContext::OnPanZoomWidgetClick() {
}

void UHUDLayoutToolContext::MarkAllDirty() {
}

void UHUDLayoutToolContext::LoadLayout(ELayoutDataType LayoutType, const FString& Reason) {
}

bool UHUDLayoutToolContext::IsSelectedWidgetUnderPanel() const {
    return false;
}

bool UHUDLayoutToolContext::IsLayoutDirty() const {
    return false;
}

bool UHUDLayoutToolContext::IsFireModeAvailable(EFireModeType NewFireMode) const {
    return false;
}

bool UHUDLayoutToolContext::IsCentered() const {
    return false;
}

bool UHUDLayoutToolContext::HasSelectedWidget() const {
    return false;
}

bool UHUDLayoutToolContext::HasSavedLayout(ELayoutDataType LayoutType) const {
    return false;
}

bool UHUDLayoutToolContext::GetPropertyMenuState() const {
    return false;
}

bool UHUDLayoutToolContext::GetIsPanning() const {
    return false;
}

bool UHUDLayoutToolContext::GetIsLerping() const {
    return false;
}

bool UHUDLayoutToolContext::GetFireModeOpenState() const {
    return false;
}

void UHUDLayoutToolContext::GetFireMode(EFireModeType& FireMode, bool& bAutofireEnabled, bool& bForceTouchEnabled, bool& bTapToShootEnabled, bool& bAlwaysShowDedicatedButton) const {
}

FVector2D UHUDLayoutToolContext::GetCurrentOffset() const {
    return FVector2D{};
}

bool UHUDLayoutToolContext::CloudHUDLayoutEnabled() const {
    return false;
}

bool UHUDLayoutToolContext::CloudHUDAvailable() const {
    return false;
}

void UHUDLayoutToolContext::CloseLayoutTool(const FString& Reason) {
}

void UHUDLayoutToolContext::ClearLayout(ELayoutDataType LayoutType, const FString& Reason) {
}

UHUDLayoutToolContext::UHUDLayoutToolContext() {
    this->HudLayoutSnappingDistance = 0;
}

