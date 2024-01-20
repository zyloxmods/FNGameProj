#include "FortGameStateSurvival.h"

void AFortGameStateSurvival::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}

AFortGameStateSurvival::AFortGameStateSurvival() {
    this->bFireEndOfDayDelegate = true;
    this->TimeToDelayEndOfDayZoneScoreWidgetDisplay = 0.50f;
}

