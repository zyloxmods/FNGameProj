#include "SubGameAccess.h"

FSubGameAccess::FSubGameAccess() {
    SubGame = ESubGame::Campaign;
    AccessStatus = ESubGameAccessStatus::Disabled;
    MatchmakingStatus = ESubGameMatchmakingStatus::Disabled;
}

