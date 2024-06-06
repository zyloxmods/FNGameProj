#include "FortFrontendPendingAsyncLevel.h"

void UFortFrontendPendingAsyncLevel::HandleLevelLoadedAsync() {
}

UFortFrontendPendingAsyncLevel::UFortFrontendPendingAsyncLevel() {
    SubgameStreamingLevel = NULL;
    FrontEndFlow = NULL;
    CameraOverride = EFrontEndCamera::Invalid;
}

