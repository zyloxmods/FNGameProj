#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPlayerEarnedItemCaches.generated.h"

class UFortItemCacheItemDefinition;

USTRUCT(BlueprintType)
struct FFortPlayerEarnedItemCaches {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemCacheItemDefinition*> EarnedItemCaches;
    
    FORTNITEGAME_API FFortPlayerEarnedItemCaches();
};

