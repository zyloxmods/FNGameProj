#include "CommonButtonGroup.h"

void UCommonButtonGroup::SetSelectionRequired(bool bRequireSelection) {
}

void UCommonButtonGroup::SelectPreviousButton(bool bAllowWrap) {
}

void UCommonButtonGroup::SelectNextButton(bool bAllowWrap) {
}

void UCommonButtonGroup::SelectButtonAtIndex(int32 ButtonIndex) {
}

void UCommonButtonGroup::OnSelectionStateChanged(UCommonButton* BaseButton, bool bIsSelected) {
}

void UCommonButtonGroup::OnHandleButtonDoubleClicked(UCommonButton* BaseButton) {
}

void UCommonButtonGroup::OnHandleButtonClicked(UCommonButton* BaseButton) {
}

void UCommonButtonGroup::OnButtonUnhovered(UCommonButton* BaseButton) {
}

void UCommonButtonGroup::OnButtonHovered(UCommonButton* BaseButton) {
}

bool UCommonButtonGroup::HasAnyButtons() const {
    return false;
}

int32 UCommonButtonGroup::GetSelectedButtonIndex() const {
    return 0;
}

UCommonButton* UCommonButtonGroup::GetSelectedButton() const {
    return NULL;
}

int32 UCommonButtonGroup::GetHoveredButtonIndex() const {
    return 0;
}

int32 UCommonButtonGroup::GetButtonCount() const {
    return 0;
}

UCommonButton* UCommonButtonGroup::GetButtonAtIndex(int32 Index) const {
    return NULL;
}

int32 UCommonButtonGroup::FindButtonIndex(const UCommonButton* ButtonToFind) const {
    return 0;
}

void UCommonButtonGroup::DeselectAll() {
}

UCommonButtonGroup::UCommonButtonGroup() {
    this->bSelectionRequired = false;
}

