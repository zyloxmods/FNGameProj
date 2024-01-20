#include "SubGameAccess.h"

FSubGameAccess::FSubGameAccess() {
    this->SubGame = ESubGame::Campaign;
    this->AccessStatus = ESubGameAccessStatus::Disabled;
    this->MatchmakingStatus = ESubGameMatchmakingStatus::Disabled;
}

