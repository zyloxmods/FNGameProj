#include "FortOnlineAccount.h"

UFortOnlineAccount::UFortOnlineAccount() {
    bEnableEulaCheck = true;
    bShouldAthenaQueryRecentPlayers = false;
    bHadLoginPurchaseCheckFailure = false;
    IgnoreProducts.AddDefaulted(1);
    bShouldClientForcePartnerId = false;
    bDisablePurchasingOnRedemptionFailure = true;
    MinimumSecondsBetweenPurchaseRedemptionAttempts = 4294967295;
    bPromptUserAndReverifyAuthToken = true;
    RefreshConnectionTimerDuration = 1;
}

