#include "FortPlayerScoreReport.h"

FFortPlayerScoreReport::FFortPlayerScoreReport() {
    PlayerTeam = EFortTeam::Spectator;
    InitialLevel = 0;
    InitialExperienceAmount = 0;
    LastExperienceDeltaAmount = 0;
    LastScoreDeltaAmount = 0;
}

