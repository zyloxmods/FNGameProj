#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "FortMcpQuestRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortMcpQuestRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Rewards;
    
    FORTNITEGAME_API FFortMcpQuestRewardInfo();
};

