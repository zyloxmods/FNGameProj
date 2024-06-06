#include "FortSpokenLine.h"

FFortSpokenLine::FFortSpokenLine() {
    Audio = NULL;
    AnimMontage = NULL;
    AnimSequence = NULL;
    Addressee = NULL;
    BroadcastFilter = FFBF_Speaker;
    Delay = 1;
    bInterruptCurrentLine = false;
    bCanBeInterrupted = false;
    bCanQue = false;
}

