#include "FortActorRecord.h"

FFortActorRecord::FFortActorRecord() {
    this->ActorState = EFortBuildingPersistentState::Default;
    this->ActorClass = NULL;
    this->bSpawnedActor = false;
}

