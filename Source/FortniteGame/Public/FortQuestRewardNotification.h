#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortQuestRewardData.h"
#include "FortQuestRewardNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestRewardData> QuestsAndRewards;
    
    FORTNITEGAME_API FFortQuestRewardNotification();
};

