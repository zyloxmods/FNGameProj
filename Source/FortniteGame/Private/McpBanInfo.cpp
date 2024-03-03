#include "McpBanInfo.h"

FMcpBanInfo::FMcpBanInfo() {
    this->BanDurationDays = 1;
    this->CompetitiveBanReason = EPlayerCompetitiveBanReasons::None;
    this->bRequiresUserAck = false;
    this->bBanHasStarted = false;
}

