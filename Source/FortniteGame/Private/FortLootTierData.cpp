#include "FortLootTierData.h"

FFortLootTierData::FFortLootTierData() {
    this->Weight = 1;
    this->QuotaLevel = ELootQuotaLevel::Unlimited;
    this->LootTier = 0;
    this->MinWorldLevel = 0;
    this->MaxWorldLevel = 0;
    this->StreakBreakerPointsMin = 0;
    this->StreakBreakerPointsMax = 0;
    this->StreakBreakerPointsSpend = 0;
    this->NumLootPackageDrops = 1;
    this->bAllowBonusLootDrops = false;
}

