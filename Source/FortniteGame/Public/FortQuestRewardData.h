#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortQuestRewardData.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult Loot;
    
    FORTNITEGAME_API FFortQuestRewardData();
};

