#include "SpecialActorRepData.h"

FSpecialActorRepData::FSpecialActorRepData() {
    this->SpecialActor = NULL;
    this->PlayerState = NULL;
    this->ReplicationInterval = 1;
    this->ReplicationIntervalDeviation = 1;
    this->NextReplicationTime = 1;
    this->LastActorNotRelevantTime = 1;
    this->bActorIsRelevant = false;
    this->bWasActorRelevantLastUpdate = false;
    this->CurrentYaw = 1;
    this->bDrawCompassIcon = false;
    this->CurrentHealth = 1;
    this->MaxHealth = 1;
    this->CurrentShield = 1;
    this->MaxShield = 1;
    this->RenderDistance = 1;
    this->AddedToClientTime = 1;
    this->LastLocationReplicationTime = 1;
    this->PrevLocationReplicatedTime = 1;
    this->LastYawReplicationTime = 1;
    this->PrevYawReplicatedTime = 1;
    this->LastRepYaw = 1;
    this->PrevRepYaw = 1;
    this->LerpStartYaw = 1;
    this->bReplicateHealth = false;
    this->bReplicateShield = false;
}

