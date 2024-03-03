#include "FortAthenaTutorialButton.h"

void UFortAthenaTutorialButton::OnTutorialButtonPressed() {
}

void UFortAthenaTutorialButton::OnTutorialButtonClicked() {
}

UFortAthenaTutorialButton::UFortAthenaTutorialButton() {
    this->InteractionType = ETutorialButtonInteractionType::Click;
    this->Button_Tutorial = NULL;
}

