#include "CombatEventData.h"

FCombatEventData::FCombatEventData() {
    Heat = 1;
    MaxHeatContribution = 1;
    CoolDownRate = 1;
    ContributionType = EFortCombatEventContribution::Linear;
}

