#include "FortSkydivingShadowProxy.h"



void AFortSkydivingShadowProxy::CheckHeight() {
}

AFortSkydivingShadowProxy::AFortSkydivingShadowProxy() {
    this->SkydivingHeightThreshold = 1;
    this->SkydivingHeightCheckInterval = 1;
    this->bDestroyOnHide = true;
    this->ViewingPlayerController = NULL;
}

