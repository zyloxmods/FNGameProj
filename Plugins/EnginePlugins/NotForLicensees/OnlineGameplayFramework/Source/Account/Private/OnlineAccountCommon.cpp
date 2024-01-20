#include "OnlineAccountCommon.h"

UOnlineAccountCommon::UOnlineAccountCommon() {
    this->bRequireLightswitchAtStartup = true;
    this->EulaKey = TEXT("fn");
    this->WebCreateEpicAccountUrl.AddDefaulted(4);
    this->bAllowLocalLogout = false;
    this->bAllowLocalLogoutKairos = true;
    this->bUsePinGrantCodeForLinking = false;
    this->SkipRedeemOfflinePurchasesChance = 0.00f;
    this->bShouldGrantFreeAccess = false;
    this->bUseGameSubAccessRedemption = false;
    this->bAllowHomeSharingAccess = false;
    this->bRequireUGCPrivilege = true;
    this->AccessGrantDelaySeconds = 2.00f;
    this->WaitingRoomState = NULL;
    this->bAutoCreateHeadlessAccount = false;
}

