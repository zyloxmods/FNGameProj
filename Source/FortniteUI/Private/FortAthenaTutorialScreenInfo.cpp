#include "FortAthenaTutorialScreenInfo.h"

FFortAthenaTutorialScreenInfo::FFortAthenaTutorialScreenInfo() {
    this->Substep = EFortAthenaTutorialSubstep::ScreenSwipeToLook;
    this->ForceSingleInputKeybind = false;
    this->DisplayNextButton = false;
    this->DisplayTextPromptTarget = false;
    this->ExtraWidget = EFortAthenaTutorialScreenExtraWidget::None;
}

