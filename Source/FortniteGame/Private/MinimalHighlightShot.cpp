#include "MinimalHighlightShot.h"

FMinimalHighlightShot::FMinimalHighlightShot() {
    VersionNumber = 0;
    StartTimestamp = 1;
    ShotDuration = 1;
    NumEliminations = 0;
    ClipSignificance = EHighlightSignificances::NotSignificant;
    FinalScore = 1;
}

