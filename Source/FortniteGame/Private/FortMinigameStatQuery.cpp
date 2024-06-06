#include "FortMinigameStatQuery.h"

FFortMinigameStatQuery::FFortMinigameStatQuery() {
    Stat = NULL;
    Scope = EFortMinigameStatScope::Group;
    bAnyMatch = false;
    Operation = EFortMinigameStatOperation::Equal;
    Value = 0;
    bStaticCount = false;
}

