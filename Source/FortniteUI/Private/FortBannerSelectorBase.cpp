#include "FortBannerSelectorBase.h"

void UFortBannerSelectorBase::UpdateErrorText(const FText& ErrorMessageText) {
}



void UFortBannerSelectorBase::IsPlayerNameValid(const FText& PlayerName, bool& OutIsValid, FText& OutErrorText) const {
}

bool UFortBannerSelectorBase::HasIllegalChars(const FString& NewBannerName) const {
    return false;
}

void UFortBannerSelectorBase::HandleBannerNameChanged(const FText& Text) {
}

void UFortBannerSelectorBase::CompleteHomebaseName() {
}

void UFortBannerSelectorBase::CompleteHomebaseBannerSelection() {
}

UFortBannerSelectorBase::UFortBannerSelectorBase() {
    this->BannerName = NULL;
    this->BannerNameMaxLength = 0;
    this->ErrorBorder = NULL;
    this->ErrorText = NULL;
    this->bFilterHomeBaseNameWithOSS = false;
}

