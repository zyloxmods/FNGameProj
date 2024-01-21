#include "CombatEventData.h"

FCombatEventData::FCombatEventData() {
    this->Heat = 0.00f;
    this->MaxHeatContribution = 0.00f;
    this->CoolDownRate = 0.00f;
    this->ContributionType = EFortCombatEventContribution::Linear;
}

