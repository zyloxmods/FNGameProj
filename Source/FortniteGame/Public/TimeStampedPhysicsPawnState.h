#pragma once
#include "CoreMinimal.h"
#include "ReplicatedPhysicsPawnState.h"
#include "TimeStampedPhysicsPawnState.generated.h"

USTRUCT(BlueprintType)
struct FTimeStampedPhysicsPawnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedPhysicsPawnState PhysicsPawnState;
    
    FORTNITEGAME_API FTimeStampedPhysicsPawnState();
};

