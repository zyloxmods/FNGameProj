#include "FortRejoinCheck.h"

UFortRejoinCheck::UFortRejoinCheck() {
    this->bAbandonAfterCheck = false;
    this->bAttemptingAbandon = false;
    this->CurrentJoinState = EJoinServerState::Inactive;
}

