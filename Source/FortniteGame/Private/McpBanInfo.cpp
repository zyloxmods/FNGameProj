#include "McpBanInfo.h"

FMcpBanInfo::FMcpBanInfo() {
    BanDurationDays = 1;
    CompetitiveBanReason = EPlayerCompetitiveBanReasons::None;
    bRequiresUserAck = false;
    bBanHasStarted = false;
}

