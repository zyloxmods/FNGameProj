#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyIncreaseRewardEntry.h"
#include "FortDifficultyIncreaseRewardRecord.generated.h"

USTRUCT(BlueprintType)
struct FFortDifficultyIncreaseRewardRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDifficultyIncreaseRewardEntry> PendingRewards;
    
    FORTNITEGAME_API FFortDifficultyIncreaseRewardRecord();
};

