#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortQuestRewardNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortQuestRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult Loot;
    
    FFortQuestRewardNotification();
};

