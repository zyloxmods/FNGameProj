#include "FortOnlineAccount.h"

UFortOnlineAccount::UFortOnlineAccount() {
    this->bShouldCheckIfPlatformAllowed = true;
    this->bShouldAthenaQueryRecentPlayers = false;
    this->bHadLoginPurchaseCheckFailure = false;
    this->IgnoreProducts.AddDefaulted(1);
    this->bShouldClientForcePartnerId = false;
    this->bDisablePurchasingOnRedemptionFailure = true;
    this->MinimumSecondsBetweenPurchaseRedemptionAttempts = 60.00f;
    this->bPromptUserAndReverifyAuthToken = false;
    this->RefreshConnectionTimerDuration = 7.00f;
}

