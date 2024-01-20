#include "FortToggledEditModeParams.h"

void UFortToggledEditModeParams::SetParams(AFortPlayerController* _PlayerThatToggledEditMode, ABuildingSMActor* InEditableActor, bool InEditMode, UFortToggledEditModeParams*& ThisParam) {
}

void UFortToggledEditModeParams::BreakParams(AFortPlayerController*& _PlayerThatToggledEditMode, ABuildingSMActor*& NewEditableActor, bool& InEditMode) {
}

UFortToggledEditModeParams::UFortToggledEditModeParams() {
    this->PlayerThatToggledEditMode = NULL;
    this->EditableActor = NULL;
    this->bInEditMode = false;
}

