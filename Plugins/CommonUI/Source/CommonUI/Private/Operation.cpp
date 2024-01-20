#include "Operation.h"

FOperation::FOperation() {
    this->Operation = EOperation::Intro;
    this->Panel = NULL;
    this->bIntroPanel = false;
    this->bActivatePanel = false;
    this->bOutroPanelBelow = false;
}

