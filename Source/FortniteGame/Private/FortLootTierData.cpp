#include "FortLootTierData.h"

FFortLootTierData::FFortLootTierData() {
    Weight = 1;
    QuotaLevel = ELootQuotaLevel::Unlimited;
    LootTier = 0;
    MinWorldLevel = 0;
    MaxWorldLevel = 0;
    StreakBreakerPointsMin = 0;
    StreakBreakerPointsMax = 0;
    StreakBreakerPointsSpend = 0;
    NumLootPackageDrops = 1;
    bAllowBonusLootDrops = false;
}

