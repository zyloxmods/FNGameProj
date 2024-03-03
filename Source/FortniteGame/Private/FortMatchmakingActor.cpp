#include "FortMatchmakingActor.h"

bool AFortMatchmakingActor::ShouldUseBlueprintMMSCode() const {
    return false;
}

FString AFortMatchmakingActor::GetMMSCodeForLocalPlayerParty() {
    return TEXT("");
}

AFortMatchmakingActor::AFortMatchmakingActor() {
}

