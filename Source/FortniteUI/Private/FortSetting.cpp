#include "FortSetting.h"

FText UFortSetting::GetDynamicDetails() const {
    return FText::GetEmpty();
}

ESlateVisibility UFortSetting::GetDisplayNameVisibility() {
    return ESlateVisibility::Visible;
}

FText UFortSetting::GetDisplayName() const {
    return FText::GetEmpty();
}

FString UFortSetting::GetDevName() const {
    return TEXT("");
}

FText UFortSetting::GetDescriptionRichText() const {
    return FText::GetEmpty();
}

UFortSetting::UFortSetting() {
    this->LocalPlayer = NULL;
    this->SettingParent = NULL;
    this->OwningRegistry = NULL;
}

