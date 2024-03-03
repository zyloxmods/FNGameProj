#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "FortChallengeBundleLevelReward.generated.h"

USTRUCT(BlueprintType)
struct FFortChallengeBundleLevelReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference RewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumObjectivesNeeded;
    
    FORTNITEGAME_API FFortChallengeBundleLevelReward();
};

