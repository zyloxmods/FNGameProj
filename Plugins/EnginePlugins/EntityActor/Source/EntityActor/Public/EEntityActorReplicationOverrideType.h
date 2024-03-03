#pragma once
#include "CoreMinimal.h"
#include "EEntityActorReplicationOverrideType.generated.h"

UENUM(BlueprintType)
enum EEntityActorReplicationOverrideType {
    AutoReplication,
    DoNotReplicate,
    ReplicateAlways,
    Static_Spatial,
    Dynamic_Spatial,
    Dormancy_Spatial,
};

