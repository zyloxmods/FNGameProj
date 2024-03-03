#include "FortOptionsMenu.h"

bool UFortOptionsMenu::ShowVideoOptions() {
    return false;
}

bool UFortOptionsMenu::ShowTouchAndMotionOptions() {
    return false;
}

bool UFortOptionsMenu::ShowNewControllerSenseOptions() {
    return false;
}

bool UFortOptionsMenu::ShowInputOptions() {
    return false;
}

bool UFortOptionsMenu::ShowControllerOptions() {
    return false;
}

bool UFortOptionsMenu::ShowAccountOptions() {
    return false;
}

void UFortOptionsMenu::SetApplyOrTest(bool bShowApply) {
}

void UFortOptionsMenu::ResetClientHUDSettings() {
}

void UFortOptionsMenu::ResetActionHandlerStates(bool bIsBackButtonDisabled) {
}

void UFortOptionsMenu::RequestTab(FName TabId, const FString& SettingDevName) {
}

void UFortOptionsMenu::OpenSettingsIfSaved() {
}

void UFortOptionsMenu::OnVideoCancel() {
}

void UFortOptionsMenu::OnVideoAccept() {
}

void UFortOptionsMenu::OnToggleModeInternal(bool& PassThrough) {
}


void UFortOptionsMenu::OnTest(bool& PassThrough) {
}

void UFortOptionsMenu::OnRestoreToInitial() {
}

void UFortOptionsMenu::OnResetToDefaults(int32 PresetToSet) {
}

void UFortOptionsMenu::OnResetToDefaultInternal(bool& PassThrough) {
}


void UFortOptionsMenu::OnReset() {
}


void UFortOptionsMenu::OnInputResetToDefaultInternal(bool& PassThrough) {
}

void UFortOptionsMenu::OnBackInternal(bool& PassThrough) {
}


void UFortOptionsMenu::OnApplySettingsInternal(bool& PassThrough) {
}


void UFortOptionsMenu::OnApplyAndTest(bool& PassThrough) {
}

bool UFortOptionsMenu::NeedsVideoChangeConfirmation() {
    return false;
}

bool UFortOptionsMenu::NeedsLanguageChangeConfirmation() {
    return false;
}




void UFortOptionsMenu::ExitIfTabSaved() {
}

void UFortOptionsMenu::ClearCachedEula() {
}

void UFortOptionsMenu::ApplySettingss() {
}

UFortOptionsMenu::UFortOptionsMenu() {
    this->SizeBox_HeadingLeto = NULL;
    this->TabList_Categories = NULL;
    this->SettingTabSwitcher = NULL;
}

