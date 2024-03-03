#include "StenciledActorData.h"

FStenciledActorData::FStenciledActorData() {
    this->Duration = 1;
    this->StepTime = 1;
    this->ShareActorWith = EShareActorWith::None;
    this->Sound = NULL;
    this->FriendlyStencilIndex = 0;
    this->EnemyStencilIndex = 0;
}

