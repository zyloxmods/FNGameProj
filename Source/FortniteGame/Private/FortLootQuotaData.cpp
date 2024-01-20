#include "FortLootQuotaData.h"

FFortLootQuotaData::FFortLootQuotaData() {
    this->QuotaLevel = ELootQuotaLevel::Unlimited;
    this->Min = 0;
    this->Max = 0;
    this->Quota = 0.00f;
    this->MinWorldLevel = 0;
    this->MaxWorldLevel = 0;
}

