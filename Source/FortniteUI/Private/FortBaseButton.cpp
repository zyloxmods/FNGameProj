#include "FortBaseButton.h"
#include "Templates/SubclassOf.h"

void UFortBaseButton::SetStyle(TSubclassOf<UFortButtonStyle> InStyle) {
}

void UFortBaseButton::SetSelectionGroup(FName InSelectionGroup) {
}

void UFortBaseButton::SetSelected(bool InSelected) {
}

void UFortBaseButton::SetHovered(bool InHovered) {
}

void UFortBaseButton::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UFortBaseButton::SetClickable(bool InClickable) {
}

void UFortBaseButton::SetBrushSize(TEnumAsByte<EFortBrushSize::Type> InSize) {
}

void UFortBaseButton::SetBangVisibility(bool bVisible) {
}

void UFortBaseButton::OnButtonClicked() {
}

UFortButtonStyle* UFortBaseButton::GetStyle() const {
    return NULL;
}

int32 UFortBaseButton::GetSelectionGroupIndex() {
    return 0;
}

bool UFortBaseButton::GetSelected() const {
    return false;
}

FFortStateStyle UFortBaseButton::GetCurrentStateStyle() const {
    return FFortStateStyle{};
}

FSlateFontInfo UFortBaseButton::GetCurrentFont() const {
    return FSlateFontInfo{};
}

FMargin UFortBaseButton::GetCurrentCustomPadding() const {
    return FMargin{};
}

FMargin UFortBaseButton::GetCurrentButtonPadding() const {
    return FMargin{};
}

void UFortBaseButton::ForceClick() {
}

UFortBaseButton::UFortBaseButton() {
    this->BangSize = EFortBangSize::XXS;
    this->BangType = EFortBangType::Invalid;
    this->TutorialGlowType = EFortTutorialGlowType::None;
    this->Style = NULL;
    this->BrushSize = EFortBrushSize::VeryVerySmall;
    this->bSelectable = false;
    this->bToggleable = false;
    this->bClickable = true;
    this->ClickMethod = EButtonClickMethod::DownAndUp;
}

