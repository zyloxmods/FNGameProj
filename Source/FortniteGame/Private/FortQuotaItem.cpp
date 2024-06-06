#include "FortQuotaItem.h"

int32 UFortQuotaItem::GetCurrentQuotaAmount() {
    return 0;
}

UFortQuotaItem::UFortQuotaItem() {
    current_value = 1;
    last_mod_time = TEXT("UNINITIALIZED");
    units_per_minute_recharge = 0;
    max_quota = 0;
    recharge_delay_minutes = 0;
}

