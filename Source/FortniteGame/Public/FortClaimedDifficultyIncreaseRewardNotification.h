#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortClaimedDifficultyIncreaseRewardNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortClaimedDifficultyIncreaseRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootGranted;
    
    FFortClaimedDifficultyIncreaseRewardNotification();
};

