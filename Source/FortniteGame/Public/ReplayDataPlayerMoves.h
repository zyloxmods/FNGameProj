#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.h"
#include "ReplayDataMoveSnapshotContainer.h"
#include "ReplayDataPlayerMoves.generated.h"

USTRUCT(BlueprintType)
struct FReplayDataPlayerMoves : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FReplayDataMoveSnapshotContainer> PlayerPersistentIdToMoveSamples;
    
    FORTNITEGAME_API FReplayDataPlayerMoves();
};

