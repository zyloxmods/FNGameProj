#include "FortBotTeleportInfo.h"

FFortBotTeleportInfo::FFortBotTeleportInfo() {
    this->bTeleportSuccess = false;
    this->TeleportReason = ETeleportReason::AgentNotOnNavmesh;
}

