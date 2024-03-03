#include "FortMatchXPTotalEntry.h"

void UFortMatchXPTotalEntry::InitializeXPCounter() {
}

int32 UFortMatchXPTotalEntry::GetXPTarget() {
    return 0;
}

UFortMatchXPTotalEntry::UFortMatchXPTotalEntry() {
    this->bIsTotal = false;
    this->NumericText_XPValue = NULL;
    this->TextBlock_XPType = NULL;
}

