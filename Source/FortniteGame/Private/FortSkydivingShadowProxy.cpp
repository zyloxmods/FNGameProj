#include "FortSkydivingShadowProxy.h"



void AFortSkydivingShadowProxy::CheckHeight() {
}

AFortSkydivingShadowProxy::AFortSkydivingShadowProxy() {
    this->SkydivingHeightThreshold = 15000.00f;
    this->SkydivingHeightCheckInterval = 0.50f;
    this->bDestroyOnHide = true;
    this->ViewingPlayerController = NULL;
}

