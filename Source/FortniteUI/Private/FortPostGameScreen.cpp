#include "FortPostGameScreen.h"

void UFortPostGameScreen::GoToPreviousScreen() {
}

void UFortPostGameScreen::GoToNextScreen() {
}

bool UFortPostGameScreen::BP_ShouldDisplay_Implementation() {
    return false;
}

void UFortPostGameScreen::BP_OnToggleBlurRequest() {
}

UFortPostGameScreen::UFortPostGameScreen() {
    this->bCanGoBackToThisScreen = true;
}

