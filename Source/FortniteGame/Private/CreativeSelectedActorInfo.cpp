#include "CreativeSelectedActorInfo.h"

FCreativeSelectedActorInfo::FCreativeSelectedActorInfo() {
    this->Actor = NULL;
    this->OriginalRelevancyDistance = 1;
    this->bWasCollisionEnabled = false;
    this->bWasDormant = false;
    this->bSpawnedFromSaveRecord = false;
    this->LogicalConnectionChainIndex = 0;
}

