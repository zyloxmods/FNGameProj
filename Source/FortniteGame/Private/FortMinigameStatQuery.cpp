#include "FortMinigameStatQuery.h"

FFortMinigameStatQuery::FFortMinigameStatQuery() {
    this->Stat = NULL;
    this->Scope = EFortMinigameStatScope::Group;
    this->bAnyMatch = false;
    this->Operation = EFortMinigameStatOperation::Equal;
    this->Value = 0;
    this->bStaticCount = false;
}

