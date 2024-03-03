#include "FortOnlineAccount.h"

UFortOnlineAccount::UFortOnlineAccount() {
    this->bEnableEulaCheck = true;
    this->bShouldAthenaQueryRecentPlayers = false;
    this->bHadLoginPurchaseCheckFailure = false;
    this->IgnoreProducts.AddDefaulted(1);
    this->bShouldClientForcePartnerId = false;
    this->bDisablePurchasingOnRedemptionFailure = true;
    this->MinimumSecondsBetweenPurchaseRedemptionAttempts = 4294967295;
    this->bPromptUserAndReverifyAuthToken = true;
    this->RefreshConnectionTimerDuration = 1;
}

