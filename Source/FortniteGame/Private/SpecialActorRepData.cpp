#include "SpecialActorRepData.h"

FSpecialActorRepData::FSpecialActorRepData() {
    SpecialActor = NULL;
    PlayerState = NULL;
    ReplicationInterval = 1;
    ReplicationIntervalDeviation = 1;
    NextReplicationTime = 1;
    LastActorNotRelevantTime = 1;
    bActorIsRelevant = false;
    bWasActorRelevantLastUpdate = false;
    CurrentYaw = 1;
    bDrawCompassIcon = false;
    CurrentHealth = 1;
    MaxHealth = 1;
    CurrentShield = 1;
    MaxShield = 1;
    RenderDistance = 1;
    AddedToClientTime = 1;
    LastLocationReplicationTime = 1;
    PrevLocationReplicatedTime = 1;
    LastYawReplicationTime = 1;
    PrevYawReplicatedTime = 1;
    LastRepYaw = 1;
    PrevRepYaw = 1;
    LerpStartYaw = 1;
    bReplicateHealth = false;
    bReplicateShield = false;
}

