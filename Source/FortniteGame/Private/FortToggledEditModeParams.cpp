#include "FortToggledEditModeParams.h"

void UFortToggledEditModeParams::SetParams(AFortPlayerController* _PlayerThatToggledEditMode, ABuildingSMActor* InEditableActor, bool InEditMode, UFortToggledEditModeParams*& ThisParam) {
}

void UFortToggledEditModeParams::BreakParams(AFortPlayerController*& _PlayerThatToggledEditMode, ABuildingSMActor*& NewEditableActor, bool& InEditMode) {
}

UFortToggledEditModeParams::UFortToggledEditModeParams() {
    PlayerThatToggledEditMode = NULL;
    EditableActor = NULL;
    bInEditMode = false;
}

