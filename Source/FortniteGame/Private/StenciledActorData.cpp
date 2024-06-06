#include "StenciledActorData.h"

FStenciledActorData::FStenciledActorData() {
    Duration = 1;
    StepTime = 1;
    ShareActorWith = EShareActorWith::None;
    Sound = NULL;
    FriendlyStencilIndex = 0;
    EnemyStencilIndex = 0;
}

