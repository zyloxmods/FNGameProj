#include "FortQuotaItem.h"

int32 UFortQuotaItem::GetCurrentQuotaAmount() {
    return 0;
}

UFortQuotaItem::UFortQuotaItem() {
    this->current_value = -1.00f;
    this->last_mod_time = TEXT("UNINITIALIZED");
    this->units_per_minute_recharge = 0;
    this->max_quota = 0;
    this->recharge_delay_minutes = 0;
}

