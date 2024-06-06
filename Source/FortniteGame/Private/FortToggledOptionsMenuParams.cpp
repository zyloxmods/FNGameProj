#include "FortToggledOptionsMenuParams.h"

void UFortToggledOptionsMenuParams::SetParams(AFortPlayerController* _PlayerThatToggledOptionsMenu, bool Opened, UFortToggledOptionsMenuParams*& ThisParam) {
}

void UFortToggledOptionsMenuParams::BreakParams(AFortPlayerController*& _PlayerThatToggledOptionsMenu, bool& Opened) {
}

UFortToggledOptionsMenuParams::UFortToggledOptionsMenuParams() {
    PlayerThatToggledOptionsMenu = NULL;
    bInOptionsMenu = false;
}

