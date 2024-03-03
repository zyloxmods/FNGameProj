#include "FortLootQuotaData.h"

FFortLootQuotaData::FFortLootQuotaData() {
    this->QuotaLevel = ELootQuotaLevel::Unlimited;
    this->min = 0;
    this->max = 0;
    this->Quota = 1;
    this->MinWorldLevel = 0;
    this->MaxWorldLevel = 0;
}

