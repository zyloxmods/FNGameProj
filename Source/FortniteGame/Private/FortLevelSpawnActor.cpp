#include "FortLevelSpawnActor.h"
#include "Net/UnrealNetwork.h"

void AFortLevelSpawnActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLevelSpawnActor, SpecialActorID);
}

AFortLevelSpawnActor::AFortLevelSpawnActor() {
    this->CachedSpecialActorIdx = -1;
}

