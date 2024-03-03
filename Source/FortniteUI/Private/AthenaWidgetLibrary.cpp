#include "AthenaWidgetLibrary.h"

bool UAthenaWidgetLibrary::IsPlayingReplay(const UObject* WorldContextObject) {
    return false;
}

bool UAthenaWidgetLibrary::IsCreativeOrPlaygroundModePlaylist(const UObject* WorldContextObject) {
    return false;
}

APlayerState* UAthenaWidgetLibrary::GetRelevantPlayerState(const APlayerController* PlayerController) {
    return NULL;
}

UAthenaWidgetLibrary::UAthenaWidgetLibrary() {
}

