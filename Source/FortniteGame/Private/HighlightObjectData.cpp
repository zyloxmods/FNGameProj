#include "HighlightObjectData.h"

FHighlightObjectData::FHighlightObjectData() {
    this->FriendlyStencilIndex = 0;
    this->EnemyStencilIndex = 0;
    this->Effect = NULL;
    this->OverlapRadius = 1;
    this->ActorClassFilter = NULL;
    this->bIgnoreDistanceCheck = false;
    this->bOnlyHighlightOwningActor = false;
}

