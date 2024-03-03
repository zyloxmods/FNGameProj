#include "UtilityContribution.h"

FUtilityContribution::FUtilityContribution() {
    this->MaxContribution = 1;
    this->ContributingFactor = EFortCombatFactors::PlayerDamageThreat;
    this->ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    this->ContributionType = EFortFactorContributionType::CurrentValue_Direct;
}

