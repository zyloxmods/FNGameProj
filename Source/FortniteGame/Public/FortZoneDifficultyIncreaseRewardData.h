#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortZoneDifficultyIncreaseRewardData.generated.h"

USTRUCT(BlueprintType)
struct FFortZoneDifficultyIncreaseRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Rewards;
    
    FORTNITEGAME_API FFortZoneDifficultyIncreaseRewardData();
};

