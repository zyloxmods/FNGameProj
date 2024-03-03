#include "CombatEventData.h"

FCombatEventData::FCombatEventData() {
    this->Heat = 1;
    this->MaxHeatContribution = 1;
    this->CoolDownRate = 1;
    this->ContributionType = EFortCombatEventContribution::Linear;
}

