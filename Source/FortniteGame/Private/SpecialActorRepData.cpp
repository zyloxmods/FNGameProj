#include "SpecialActorRepData.h"

FSpecialActorRepData::FSpecialActorRepData() {
    this->SpecialActor = NULL;
    this->PlayerState = NULL;
    this->ReplicationInterval = 0.00f;
    this->ReplicationIntervalDeviation = 0.00f;
    this->NextReplicationTime = 0.00f;
    this->LastActorNotRelevantTime = 0.00f;
    this->bActorIsRelevant = false;
    this->bWasActorRelevantLastUpdate = false;
    this->CurrentYaw = 0.00f;
    this->bDrawCompassIcon = false;
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 0.00f;
    this->CurrentShield = 0.00f;
    this->MaxShield = 0.00f;
    this->RenderDistance = 0.00f;
    this->AddedToClientTime = 0.00f;
    this->LastLocationReplicationTime = 0.00f;
    this->PrevLocationReplicatedTime = 0.00f;
    this->LastYawReplicationTime = 0.00f;
    this->PrevYawReplicatedTime = 0.00f;
    this->LastRepYaw = 0.00f;
    this->PrevRepYaw = 0.00f;
    this->LerpStartYaw = 0.00f;
    this->bReplicateHealth = false;
    this->bReplicateShield = false;
}

