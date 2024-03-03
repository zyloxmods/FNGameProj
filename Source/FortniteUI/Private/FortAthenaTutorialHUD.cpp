#include "FortAthenaTutorialHUD.h"




void UFortAthenaTutorialHUD::BroadcastSkipMenuOpened() {
}

UFortAthenaTutorialHUD::UFortAthenaTutorialHUD() {
    this->TutorialManager = NULL;
    this->CurrentTrackedActor = NULL;
    this->Overlay_TutorialScreen = NULL;
    this->Athena_Tutorial_Skip_Mobile = NULL;
    this->Athena_Tutorial_TargetCounter = NULL;
    this->Athena_Tutorial_ProgressBar = NULL;
    this->Athena_Tutorial_ModalPopup = NULL;
    this->TextPrompt_Tutorial = NULL;
    this->Overlay_Finger = NULL;
    this->Overlay_Gradient = NULL;
    this->Widget_EasyInteractFinger = NULL;
}

