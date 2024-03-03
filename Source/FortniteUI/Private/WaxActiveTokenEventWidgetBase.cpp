#include "WaxActiveTokenEventWidgetBase.h"

int32 UWaxActiveTokenEventWidgetBase::GetWaxTokensMediumCrit() const {
    return 0;
}

int32 UWaxActiveTokenEventWidgetBase::GetWaxTokensHighCrit() const {
    return 0;
}

UWaxActiveTokenEventWidgetBase::UWaxActiveTokenEventWidgetBase() {
    this->WaxMutator = NULL;
    this->WaxTokensForMediumCrit = 0;
    this->WaxTokensForHighCrit = 0;
}

