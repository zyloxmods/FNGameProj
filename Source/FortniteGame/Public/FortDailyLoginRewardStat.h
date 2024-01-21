#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortDailyLoginRewardStat_ScheduleClaimed.h"
#include "FortDailyLoginRewardStat.generated.h"

USTRUCT(BlueprintType)
struct FFortDailyLoginRewardStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextDefaultReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDaysLoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastClaimDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFortDailyLoginRewardStat_ScheduleClaimed> AdditionalSchedules;
    
    FORTNITEGAME_API FFortDailyLoginRewardStat();
};

