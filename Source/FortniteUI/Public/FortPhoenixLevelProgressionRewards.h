#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortPhoenixLevelProgressionRewards.generated.h"

USTRUCT(BlueprintType)
struct FFortPhoenixLevelProgressionRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextRewardLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemQuantityPair NextReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextMajorRewardLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemQuantityPair NextMajorReward;
    
    FORTNITEUI_API FFortPhoenixLevelProgressionRewards();
};

