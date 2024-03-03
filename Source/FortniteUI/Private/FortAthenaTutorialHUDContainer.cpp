#include "FortAthenaTutorialHUDContainer.h"

UFortAthenaTutorialHUDContainer::UFortAthenaTutorialHUDContainer() {
    this->CurrentScreen = NULL;
    this->TutorialManager = NULL;
    this->TutorialHUD = NULL;
    this->Overlay_TutorialHUD = NULL;
    this->TutorialScreenData = NULL;
    this->CurrentTutorialStep = 0;
    this->CurrentTutorialSubstep = 0;
}

