#include "FortSubGameSelectBase.h"

void UFortSubGameSelectBase::ShowRedeemCodeScreen(const ESubGame SubGame, const FOnRedeemCodeFlowComplete& CompletionDelegate) {
}


bool UFortSubGameSelectBase::IsSubGameOptionVisible(EFortSubgameSelectOption SubGameOption) const {
    return false;
}

void UFortSubGameSelectBase::GetUpsellStorefrontNames(const ESubGame SubGame, TArray<FString>& OutStorefrontNames) const {
}

ESubGame UFortSubGameSelectBase::GetSubGameBySubGameSelectOption(EFortSubgameSelectOption SubGameOption) const {
    return ESubGame::Campaign;
}

bool UFortSubGameSelectBase::GetShortDescription(EFortSubgameSelectOption SubGameOption, FText& ShortDescription) const {
    return false;
}

bool UFortSubGameSelectBase::GetIsOnSale(EFortSubgameSelectOption SubGameOption) const {
    return false;
}

bool UFortSubGameSelectBase::GetFullDescription(EFortSubgameSelectOption SubGameOption, FText& FullDescription) const {
    return false;
}

bool UFortSubGameSelectBase::CheckRewardRate() const {
    return false;
}

UFortSubGameSelectBase::UFortSubGameSelectBase() {
}

