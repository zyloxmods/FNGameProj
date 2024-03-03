#include "FortFrontendPendingAsyncLevel.h"

void UFortFrontendPendingAsyncLevel::HandleLevelLoadedAsync() {
}

UFortFrontendPendingAsyncLevel::UFortFrontendPendingAsyncLevel() {
    this->SubgameStreamingLevel = NULL;
    this->FrontEndFlow = NULL;
    this->CameraOverride = EFrontEndCamera::Invalid;
}

