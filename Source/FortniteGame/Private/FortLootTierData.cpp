#include "FortLootTierData.h"

FFortLootTierData::FFortLootTierData() {
    this->Weight = 0.00f;
    this->QuotaLevel = ELootQuotaLevel::Unlimited;
    this->LootTier = 0;
    this->MinWorldLevel = 0;
    this->MaxWorldLevel = 0;
    this->StreakBreakerPointsMin = 0;
    this->StreakBreakerPointsMax = 0;
    this->StreakBreakerPointsSpend = 0;
    this->NumLootPackageDrops = 0.00f;
    this->bAllowBonusLootDrops = false;
}

