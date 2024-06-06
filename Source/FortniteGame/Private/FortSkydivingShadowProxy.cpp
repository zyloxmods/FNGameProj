#include "FortSkydivingShadowProxy.h"



void AFortSkydivingShadowProxy::CheckHeight() {
}

AFortSkydivingShadowProxy::AFortSkydivingShadowProxy() {
    SkydivingHeightThreshold = 1;
    SkydivingHeightCheckInterval = 1;
    bDestroyOnHide = true;
    ViewingPlayerController = NULL;
}

