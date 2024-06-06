#include "FortLootQuotaData.h"

FFortLootQuotaData::FFortLootQuotaData() {
    QuotaLevel = ELootQuotaLevel::Unlimited;
    min = 0;
    max = 0;
    Quota = 1;
    MinWorldLevel = 0;
    MaxWorldLevel = 0;
}

