#include "FortSpawnActorInfo.h"

UFortSpawnActorInfo::UFortSpawnActorInfo() {
    this->SpawnActorClass = NULL;
    this->SpawnTiming = EFortSpawnActorTime::PostPlaylistLoad;
}

