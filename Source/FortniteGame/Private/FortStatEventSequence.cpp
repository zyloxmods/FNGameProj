#include "FortStatEventSequence.h"

FFortStatEventSequence::FFortStatEventSequence() {
    this->RepeatType = EFortEventRepeat::EFER_Inactive;
    this->AssociatedStat = NULL;
    this->FPC = NULL;
}

