#include "UtilityContribution.h"

FUtilityContribution::FUtilityContribution() {
    MaxContribution = 1;
    ContributingFactor = EFortCombatFactors::PlayerDamageThreat;
    ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    ContributionType = EFortFactorContributionType::CurrentValue_Direct;
}

