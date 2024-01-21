#include "FortAIDirectorFactorContribution.h"

FFortAIDirectorFactorContribution::FFortAIDirectorFactorContribution() {
    this->AIDirectorEvent = EFortAIDirectorEvent::PlayerAIEnemies;
    this->MaxContribution = 0.00f;
    this->ContributionType = EFortAIDirectorFactorContribution::Direct;
}

