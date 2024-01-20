#pragma once
#include "CoreMinimal.h"
#include "FortQuestPoolStats_PerPool.h"
#include "FortQuestPoolStats.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortQuestPoolStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestPoolStats_PerPool> PoolStats;
    
    FFortQuestPoolStats();
};

