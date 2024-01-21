#include "FortAccountOptions.h"

bool UFortAccountOptions::ShouldShowSamsungStore() const {
    return false;
}


void UFortAccountOptions::SetPrivacySettings(const FMcpPrivacySettings& NewPrivacySettings) {
}

void UFortAccountOptions::SetCanReceiveGifts(bool bInCanReceiveGifts) {
}

void UFortAccountOptions::SaveSettingsToMcp() {
}

void UFortAccountOptions::LoadSamsungOptions(TArray<FText>& OutOptions, int32& CurrentOptionIdx) {
}

void UFortAccountOptions::ChangeSamsungStoreSetting(int32 SettingIdx) {
}

bool UFortAccountOptions::CanLocalPlayerReceiveGifts() const {
    return false;
}

UFortAccountOptions::UFortAccountOptions() {
}

