#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.h"
#include "ReplayDataActorPosition.h"
#include "ReplayActorsPosition.generated.h"

USTRUCT(BlueprintType)
struct FReplayActorsPosition : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayDataActorPosition> Chests;
    
    FORTNITEGAME_API FReplayActorsPosition();
};

