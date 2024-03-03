#include "MinimalHighlightShot.h"

FMinimalHighlightShot::FMinimalHighlightShot() {
    this->VersionNumber = 0;
    this->StartTimestamp = 1;
    this->ShotDuration = 1;
    this->NumEliminations = 0;
    this->ClipSignificance = EHighlightSignificances::NotSignificant;
    this->FinalScore = 1;
}

