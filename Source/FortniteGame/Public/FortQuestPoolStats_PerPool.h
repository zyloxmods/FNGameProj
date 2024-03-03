#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortQuestPoolStats_PerPool.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestPoolStats_PerPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NextRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RerollsRemaining;
    
    FORTNITEGAME_API FFortQuestPoolStats_PerPool();
};

