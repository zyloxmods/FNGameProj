#include "FortStatEventSequence.h"

FFortStatEventSequence::FFortStatEventSequence() {
    RepeatType = EFortEventRepeat::EFER_Inactive;
    AssociatedStat = NULL;
    FPC = NULL;
}

