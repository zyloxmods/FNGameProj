#pragma once
#include "CoreMinimal.h"
#include "EEntityActorReplicationRelevancyBucketType.generated.h"

UENUM(BlueprintType)
enum EEntityActorReplicationRelevancyBucketType {
    UseVisualCullDistanceForReplicationRelevancy,
    SmallReplicationRelevancy,
    MediumReplicationRelevancy,
    LargeReplicationRelevancy,
    MaxTargetRangeReplicationRelevancy,
    ImportantReplicationRelevancy,
    CustomReplicationRelevancy,
};

