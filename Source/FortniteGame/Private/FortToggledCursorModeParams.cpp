#include "FortToggledCursorModeParams.h"

void UFortToggledCursorModeParams::SetParams(AFortPlayerController* _PlayerThatToggledCursorMode, bool InCursorMode, UFortToggledCursorModeParams*& ThisParam) {
}

void UFortToggledCursorModeParams::BreakParams(AFortPlayerController*& _PlayerThatToggledCursorMode, bool& InCursorMode) {
}

UFortToggledCursorModeParams::UFortToggledCursorModeParams() {
    this->PlayerThatToggledCursorMode = NULL;
    this->bInCursorMode = false;
}

