#include "FortKeybindWidget.h"

void UFortKeybindWidget::UpdateKeybindWidget() {
}

void UFortKeybindWidget::StopHoldProgress(FName HoldActionName, bool bCompletedSuccessfully) {
}

void UFortKeybindWidget::StartHoldProgress(FName HoldActionName, float HoldDuration) {
}

void UFortKeybindWidget::SetShowProgressCountDown(bool bShow) {
}

void UFortKeybindWidget::SetPresetNameOverride(const FName NewValue) {
}

void UFortKeybindWidget::SetForcedHoldKeybindStatus(EFortKeybindForcedHoldStatus InForcedHoldKeybindStatus) {
}

void UFortKeybindWidget::SetForcedHoldKeybind(bool InForcedHoldKeybind) {
}

void UFortKeybindWidget::SetBrushSize(TEnumAsByte<EFortBrushSize::Type> InBrushSize) {
}

void UFortKeybindWidget::SetBoundKey(FKey NewBoundAction) {
}

void UFortKeybindWidget::SetBoundAction(FName NewBoundAction) {
}

void UFortKeybindWidget::SetAxisScale(const float NewValue) {
}

bool UFortKeybindWidget::IsHoldKeybind() const {
    return false;
}

bool UFortKeybindWidget::IsBoundKeyValid() const {
    return false;
}

TEnumAsByte<EFortBrushSize::Type> UFortKeybindWidget::GetBrushSize() const {
    return EFortBrushSize::VeryVerySmall;
}

bool UFortKeybindWidget::GetBrushForKey(TEnumAsByte<EFortBrushSize::Type> InBrushSize, FSlateBrush& Brush) const {
    return false;
}

UFortKeybindWidget::UFortKeybindWidget() {
    this->AxisScale = 0.00f;
    this->InputTypeOverride = ECommonInputType::Count;
    this->GamepadTypeOverride = ECommonGamepadType::Count;
    this->bForcedHoldKeybind = false;
    this->ForcedHoldKeybindStatus = EFortKeybindForcedHoldStatus::NoForcedHold;
    this->bIsHoldKeybind = false;
    this->bShowKeybindBorder = false;
    this->bShowTimeCountDown = false;
    this->bShowUnboundStatus = false;
    this->ProgressPercentageMID = NULL;
    this->BrushSize = EFortBrushSize::Small;
}

