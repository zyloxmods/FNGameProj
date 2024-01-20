#pragma once
#include "CoreMinimal.h"
#include "McpLootEntry.h"
#include "FortDailyRewardsNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortDailyRewardsNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DaysLoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> Items;
    
    FORTNITEGAME_API FFortDailyRewardsNotification();
};

