#include "FortQuotaItemDefinition.h"

UFortQuotaItemDefinition::UFortQuotaItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    StartingValue = 1;
    MaximumValue = 0;
    UnitsPerMinuteRechargeRate = 1;
    RechargeDelayMinutes = 0;
    ItemType = EFortItemType::Quota;
}

