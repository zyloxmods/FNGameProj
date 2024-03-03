#include "FortPlayerScoreReport.h"

FFortPlayerScoreReport::FFortPlayerScoreReport() {
    this->PlayerTeam = EFortTeam::Spectator;
    this->InitialLevel = 0;
    this->InitialExperienceAmount = 0;
    this->LastExperienceDeltaAmount = 0;
    this->LastScoreDeltaAmount = 0;
}

