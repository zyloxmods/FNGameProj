#include "IntensityContribution.h"

FIntensityContribution::FIntensityContribution() {
    this->CombatFactor = EFortCombatFactors::PlayerDamageThreat;
    this->ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    this->MaxContribution = 1;
    this->bModifyContributionByCompletionPercentage = false;
    this->bModifyByNumberOfCriticalEncounterGoals = false;
}

