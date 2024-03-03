#include "FortCurieGlowFadeRequest.h"

FFortCurieGlowFadeRequest::FFortCurieGlowFadeRequest() {
    this->CurieComponent = NULL;
    this->FXType = EFortCurieNativeFXType::None;
    this->StartTimestamp = 1;
    this->bIsFadeIn = false;
}

