#include "IntensityContribution.h"

FIntensityContribution::FIntensityContribution() {
    CombatFactor = EFortCombatFactors::PlayerDamageThreat;
    ContributingAIDirectorFactor = EFortAIDirectorFactor::PlayerDamageThreat;
    MaxContribution = 1;
    bModifyContributionByCompletionPercentage = false;
    bModifyByNumberOfCriticalEncounterGoals = false;
}

