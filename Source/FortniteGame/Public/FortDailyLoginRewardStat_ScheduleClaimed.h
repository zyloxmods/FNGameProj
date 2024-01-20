#pragma once
#include "CoreMinimal.h"
#include "FortDailyLoginRewardStat_ScheduleClaimed.generated.h"

USTRUCT(BlueprintType)
struct FFortDailyLoginRewardStat_ScheduleClaimed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardsClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClaimedToday;
    
    FORTNITEGAME_API FFortDailyLoginRewardStat_ScheduleClaimed();
};

