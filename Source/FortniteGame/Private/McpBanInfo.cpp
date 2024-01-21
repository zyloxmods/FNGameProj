#include "McpBanInfo.h"

FMcpBanInfo::FMcpBanInfo() {
    this->bRequiresUserAck = false;
    this->bBanHasStarted = false;
    this->BanDurationDays = 0.00f;
    this->CompetitiveBanReason = EPlayerCompetitiveBanReasons::None;
}

