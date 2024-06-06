#include "FortQuestObjectiveStat.h"

FFortQuestObjectiveStat::FFortQuestObjectiveStat() {
    Type = EFortQuestObjectiveStatEvent::Kill;
    bIsCached = false;
    bHasInclusiveTargetTags = false;
    bHasInclusiveSourceTags = false;
    bHasInclusiveContextTags = false;
}

