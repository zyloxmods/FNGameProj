#include "NitrogenTeamData.h"

FNitrogenTeamData::FNitrogenTeamData() {
    this->UpdateId = 0;
    this->ScoreReason = ENitrogenScoreReason::None;
    this->ScoringPlayer = NULL;
    this->TeamId = 0;
    this->TeamPlacement = 0;
    this->TeamScore = 0;
    this->TeamInfoAthena = NULL;
}

