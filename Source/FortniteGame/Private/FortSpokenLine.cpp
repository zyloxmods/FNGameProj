#include "FortSpokenLine.h"

FFortSpokenLine::FFortSpokenLine() {
    this->Audio = NULL;
    this->AnimMontage = NULL;
    this->AnimSequence = NULL;
    this->Addressee = NULL;
    this->BroadcastFilter = FFBF_Speaker;
    this->Delay = 1;
    this->bInterruptCurrentLine = false;
    this->bCanBeInterrupted = false;
    this->bCanQue = false;
}

