#include "FortAIDirectorFactorContribution.h"

FFortAIDirectorFactorContribution::FFortAIDirectorFactorContribution() {
    this->AIDirectorEvent = EFortAIDirectorEvent::PlayerAIEnemies;
    this->MaxContribution = 1;
    this->ContributionType = EFortAIDirectorFactorContribution::Direct;
}

