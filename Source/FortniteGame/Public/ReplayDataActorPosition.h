#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplayDataActorPosition.generated.h"

USTRUCT(BlueprintType)
struct FReplayDataActorPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize position;
    
    FORTNITEGAME_API FReplayDataActorPosition();
};

