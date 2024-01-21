#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.h"
#include "ReplayDataSinglePlayerMove.generated.h"

USTRUCT(BlueprintType)
struct FReplayDataSinglePlayerMove : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FReplayDataSinglePlayerMove();
};

