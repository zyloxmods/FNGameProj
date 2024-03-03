#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "AthenaRewardScheduleLevel.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAthenaRewardScheduleLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaRewardItemReference> Rewards;
    
    FAthenaRewardScheduleLevel();
};

