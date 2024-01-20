#include "FortMatchmakingPolicy.h"

UFortMatchmakingPolicy::UFortMatchmakingPolicy() {
    this->bMatchmakingInProgress = false;
    this->MMPass = NULL;
    this->ChanceToHostAttempt = 0;
}

