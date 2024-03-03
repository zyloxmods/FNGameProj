#include "FortQuestObjectiveStat.h"

FFortQuestObjectiveStat::FFortQuestObjectiveStat() {
    this->Type = EFortQuestObjectiveStatEvent::Kill;
    this->bIsCached = false;
    this->bHasInclusiveTargetTags = false;
    this->bHasInclusiveSourceTags = false;
    this->bHasInclusiveContextTags = false;
}

