#include "FortFeedbackLine.h"

FFortFeedbackLine::FFortFeedbackLine() {
    this->Addressee = FFA_Instigator;
    this->Context = FFC_Instigator;
    this->bInterruptCurrentLine = false;
    this->bCanBeInterrupted = false;
    this->bCanQue = false;
}

