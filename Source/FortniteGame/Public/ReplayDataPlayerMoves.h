#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.h"
#include "ReplayDataMoveSnapshot.h"
#include "ReplayDataPlayerMoves.generated.h"

USTRUCT(BlueprintType)
struct FReplayDataPlayerMoves : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayDataMoveSnapshot> MoveSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerPersistentId;
    
    FORTNITEGAME_API FReplayDataPlayerMoves();
};

