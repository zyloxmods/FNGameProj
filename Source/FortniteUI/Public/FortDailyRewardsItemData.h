#pragma once
#include "CoreMinimal.h"
#include "FortDailyRewardsItemData.generated.h"

class UFortItem;

USTRUCT(BlueprintType)
struct FFortDailyRewardsItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCurrentReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClaimed;
    
    FORTNITEUI_API FFortDailyRewardsItemData();
};

