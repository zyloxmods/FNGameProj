#include "FortAthenaTutorialTextPrompt.h"

void UFortAthenaTutorialTextPrompt::NextButtonPressed() {
}

void UFortAthenaTutorialTextPrompt::DisplayTarget_Implementation() {
}

void UFortAthenaTutorialTextPrompt::DisplayNextButton_Implementation() {
}

void UFortAthenaTutorialTextPrompt::ActivateTextPrompt_Implementation() {
}

UFortAthenaTutorialTextPrompt::UFortAthenaTutorialTextPrompt() : UUserWidget(FObjectInitializer::Get()) {
    this->RichText_TopPrompt = NULL;
    this->RichText_BottomPrompt = NULL;
    this->RichText_ExtraInputPrompt = NULL;
    this->ActionWidget_InputFeedback = NULL;
    this->Action_KeybindWidget = NULL;
    this->Action_KeybindWidget_1 = NULL;
    this->Action_KeybindWidget_2 = NULL;
    this->Action_KeybindWidget_3 = NULL;
    this->Action_KeybindWidget_4 = NULL;
    this->Tutorial_NextButton_Input = NULL;
    this->Overlay_AllWidgets = NULL;
    this->Overlay_ActionWidgets = NULL;
    this->Overlay_KeybindWidgets = NULL;
    this->Overlay_ExtraText = NULL;
}

