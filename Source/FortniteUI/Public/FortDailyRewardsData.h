#pragma once
#include "CoreMinimal.h"
#include "FortDailyRewardsScheduleData.h"
#include "FortDailyRewardsData.generated.h"

USTRUCT(BlueprintType)
struct FFortDailyRewardsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLoginDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanClaim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDailyRewardsScheduleData> Schedules;
    
    FORTNITEUI_API FFortDailyRewardsData();
};

