#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "ERewardSource.h"
#include "AthenaAwardGroup.generated.h"

USTRUCT(BlueprintType)
struct FAthenaAwardGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERewardSource RewardSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeasonXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BookXp;
    
    FORTNITEGAME_API FAthenaAwardGroup();
};

