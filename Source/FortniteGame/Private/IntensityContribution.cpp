#include "IntensityContribution.h"

FIntensityContribution::FIntensityContribution() {
    this->CombatFactor = EFortCombatFactors::PlayerDamageThreat;
    this->ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    this->MaxContribution = 0.00f;
    this->bModifyContributionByCompletionPercentage = false;
    this->bModifyByNumberOfCriticalEncounterGoals = false;
}

