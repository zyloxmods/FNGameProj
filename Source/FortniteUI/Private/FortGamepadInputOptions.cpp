#include "FortGamepadInputOptions.h"

void UFortGamepadInputOptions::SetControllerPlatformEnum(const ECommonGamepadType InControllerPlatform) {
}

void UFortGamepadInputOptions::SetControllerPlatform(const FString& InControllerPlatform) {
}

void UFortGamepadInputOptions::ResetCustomGamepadToDefault() {
}

bool UFortGamepadInputOptions::IsCustomGamepadConfig(const FString& ConfigName) const {
    return false;
}

bool UFortGamepadInputOptions::HasCustomGamepadBindingChanges() const {
    return false;
}


FString UFortGamepadInputOptions::GetControllerPlatform() const {
    return TEXT("");
}

bool UFortGamepadInputOptions::AreAllImportantActionsBound(TArray<FText>& OutUnboundScreenLabels, const bool bRichText) {
    return false;
}

UFortGamepadInputOptions::UFortGamepadInputOptions() {
}

