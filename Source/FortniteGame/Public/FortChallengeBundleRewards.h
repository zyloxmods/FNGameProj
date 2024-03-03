#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "FortChallengeBundleRewards.generated.h"

USTRUCT(BlueprintType)
struct FFortChallengeBundleRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBundlePrestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaRewardItemReference> Rewards;
    
    FORTNITEGAME_API FFortChallengeBundleRewards();
};

