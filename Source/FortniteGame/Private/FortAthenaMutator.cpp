#include "FortAthenaMutator.h"

AFortAthenaMutator::AFortAthenaMutator() {
    this->bMutatesGameMode = false;
    this->bMutatesGameState = false;
    this->CachedGameMode = NULL;
    this->CachedGameState = NULL;
}

