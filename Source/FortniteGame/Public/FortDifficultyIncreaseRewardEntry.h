#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortDifficultyIncreaseRewardEntry.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortDifficultyIncreaseRewardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyIncreaseTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult DifficultyIncreaseMissionRewards;
    
    FFortDifficultyIncreaseRewardEntry();
};

