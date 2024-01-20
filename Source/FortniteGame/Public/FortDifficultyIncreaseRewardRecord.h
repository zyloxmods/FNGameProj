#pragma once
#include "CoreMinimal.h"
#include "FortDifficultyIncreaseRewardEntry.h"
#include "FortDifficultyIncreaseRewardRecord.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortDifficultyIncreaseRewardRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDifficultyIncreaseRewardEntry> PendingRewards;
    
    FFortDifficultyIncreaseRewardRecord();
};

