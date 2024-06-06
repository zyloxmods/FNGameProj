#include "FortActorRecord.h"

FFortActorRecord::FFortActorRecord() {
    ActorState = EFortBuildingPersistentState::Default;
    ActorClass = NULL;
    bSpawnedActor = false;
}

