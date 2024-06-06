#include "CreativeSelectedActorInfo.h"

FCreativeSelectedActorInfo::FCreativeSelectedActorInfo() {
    Actor = NULL;
    OriginalRelevancyDistance = 1;
    bWasCollisionEnabled = false;
    bWasDormant = false;
    bSpawnedFromSaveRecord = false;
    LogicalConnectionChainIndex = 0;
}

