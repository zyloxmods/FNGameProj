#include "CommonButton.h"
#include "Templates/SubclassOf.h"

void UCommonButton::StopDoubleClickPropagation() {
}

void UCommonButton::SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow) {
}

void UCommonButton::SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow, UCommonActivatablePanel* OldPanel) {
}

void UCommonButton::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UCommonButton::SetStyle(TSubclassOf<UCommonButtonStyle> InStyle) {
}

void UCommonButton::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction) {
}

void UCommonButton::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus) {
}

void UCommonButton::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast) {
}

void UCommonButton::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UCommonButton::SetPressedSoundOverride(USoundBase* Sound) {
}

void UCommonButton::SetMinDimensions(int32 InMinWidth, int32 InMinHeight) {
}

void UCommonButton::SetIsToggleable(bool bInIsToggleable) {
}

void UCommonButton::SetIsSelected(bool InSelected, bool bGiveClickFeedback) {
}

void UCommonButton::SetIsSelectable(bool bInIsSelectable) {
}

void UCommonButton::SetIsInteractionEnabled(bool bInIsInteractionEnabled) {
}

void UCommonButton::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected) {
}

void UCommonButton::SetIsFocusable(bool bInIsFocusable) {
}

void UCommonButton::SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName InProgressMaterialParam) {
}

void UCommonButton::SetHoveredSoundOverride(USoundBase* Sound) {
}

void UCommonButton::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}


void UCommonButton::OnInputMethodChanged(ECommonInputType CurrentInputType) {
}




void UCommonButton::NativeOnActionProgress(float HeldPercent) {
}

void UCommonButton::NativeOnActionComplete() {
}

bool UCommonButton::IsPressed() const {
    return false;
}

bool UCommonButton::IsInteractionEnabled() const {
    return false;
}

void UCommonButton::HandleTriggeringActionCommited(bool& bPassThrough) {
}

void UCommonButton::HandleFocusReceived() {
}

void UCommonButton::HandleButtonReleased() {
}

void UCommonButton::HandleButtonPressed() {
}

void UCommonButton::HandleButtonClicked() {
}

UCommonButtonStyle* UCommonButton::GetStyle() const {
    return NULL;
}

UMaterialInstanceDynamic* UCommonButton::GetSingleMaterialStyleMID() const {
    return NULL;
}

bool UCommonButton::GetShouldSelectUponReceivingFocus() const {
    return false;
}

bool UCommonButton::GetSelected() const {
    return false;
}

bool UCommonButton::GetIsFocusable() const {
    return false;
}

bool UCommonButton::GetInputAction(FDataTableRowHandle& InputActionRow) const {
    return false;
}

TSubclassOf<UCommonTextStyle> UCommonButton::GetCurrentTextStyleClass() const {
    return NULL;
}

UCommonTextStyle* UCommonButton::GetCurrentTextStyle() const {
    return NULL;
}

void UCommonButton::GetCurrentCustomPadding(FMargin& OutCustomPadding) const {
}

void UCommonButton::GetCurrentButtonPadding(FMargin& OutButtonPadding) const {
}

void UCommonButton::DisableButtonWithReason(const FText& DisabledReason) {
}

void UCommonButton::ClearSelection() {
}









UCommonButton::UCommonButton() {
    this->MinWidth = 0;
    this->MinHeight = 0;
    this->Style = NULL;
    this->bHideInputAction = false;
    this->bApplyAlphaOnDisable = true;
    this->bSelectable = false;
    this->bShouldSelectUponReceivingFocus = false;
    this->bInteractableWhenSelected = false;
    this->bToggleable = false;
    this->bDisplayInputActionWhenNotInteractable = true;
    this->bHideInputActionWithKeyboard = false;
    this->bShouldUseFallbackDefaultInputAction = true;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->InputPriority = 0;
    this->bIsPersistentBinding = false;
    this->InputModeOverride = ECommonInputMode::Menu;
    this->SingleMaterialStyleMID = NULL;
    this->bStopDoubleClickPropagation = false;
    this->InputActionWidget = NULL;
}

