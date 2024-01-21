#include "FortCreativeOptions.h"

bool UFortCreativeOptions::IsVisibleOption(ESettingType SettingType) {
    return false;
}

bool UFortCreativeOptions::GetVisibleOptionsForTab(ESettingTab TabType, TArray<ESettingType>& VisibleOptions) {
    return false;
}

UFortCreativeOptions::UFortCreativeOptions() {
    this->CurrentReleaseVersion = 0;
}

