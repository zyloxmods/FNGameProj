#include "FortQuotaItemDefinition.h"

UFortQuotaItemDefinition::UFortQuotaItemDefinition() {
    this->StartingValue = 1;
    this->MaximumValue = 0;
    this->UnitsPerMinuteRechargeRate = 1;
    this->RechargeDelayMinutes = 0;
    this->ItemType = EFortItemType::Quota;
}

