#include "FortAthenaTutorialScreen.h"

UFortAthenaTutorialScreen::UFortAthenaTutorialScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->bLimitedDisplayDuration = false;
    this->DisplayDuration = -1.00f;
    this->Interaction_TutorialStep = NULL;
}

