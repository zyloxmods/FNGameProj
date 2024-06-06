#include "FortRejoinCheck.h"

UFortRejoinCheck::UFortRejoinCheck() {
    bAbandonAfterCheck = false;
    bAttemptingAbandon = false;
    CurrentJoinState = EJoinServerState::Inactive;
}

