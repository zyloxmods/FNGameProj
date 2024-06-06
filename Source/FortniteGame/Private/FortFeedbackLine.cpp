#include "FortFeedbackLine.h"

FFortFeedbackLine::FFortFeedbackLine() {
    Addressee = FFA_Instigator;
    Context = FFC_Instigator;
    bInterruptCurrentLine = false;
    bCanBeInterrupted = false;
    bCanQue = false;
}

