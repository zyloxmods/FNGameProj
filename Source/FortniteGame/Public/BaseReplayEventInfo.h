#pragma once
#include "CoreMinimal.h"
#include "BaseReplayEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FBaseReplayEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNumber;
    
    FORTNITEGAME_API FBaseReplayEventInfo();
};

