#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.h"
#include "ReplayTimecodeEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimecodeEventInfo : public FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UTCTimecode;
    
    FORTNITEGAME_API FReplayTimecodeEventInfo();
};

