#include "HighlightObjectData.h"

FHighlightObjectData::FHighlightObjectData() {
    FriendlyStencilIndex = 0;
    EnemyStencilIndex = 0;
    Effect = NULL;
    OverlapRadius = 1;
    ActorClassFilter = NULL;
    bIgnoreDistanceCheck = false;
    bOnlyHighlightOwningActor = false;
}

