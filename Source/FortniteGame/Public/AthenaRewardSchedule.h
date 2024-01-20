#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardScheduleLevel.h"
#include "AthenaRewardSchedule.generated.h"

USTRUCT(BlueprintType)
struct FAthenaRewardSchedule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAthenaRewardScheduleLevel> Levels;
    
    FORTNITEGAME_API FAthenaRewardSchedule();
};

