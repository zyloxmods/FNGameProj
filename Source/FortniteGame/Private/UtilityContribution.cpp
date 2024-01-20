#include "UtilityContribution.h"

FUtilityContribution::FUtilityContribution() {
    this->ContributingFactor = EFortCombatFactors::PlayerDamageThreat;
    this->ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    this->MaxContribution = 0.00f;
    this->ContributionType = EFortFactorContributionType::CurrentValue_Direct;
}

