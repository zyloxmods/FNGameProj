#pragma once
#include "CoreMinimal.h"
#include "FortChallengeBundleLevelReward.h"
#include "FortChallengeBundleLevel.generated.h"

USTRUCT(BlueprintType)
struct FFortChallengeBundleLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleLevelReward> BundleLevelRewardEntries;
    
    FORTNITEGAME_API FFortChallengeBundleLevel();
};

