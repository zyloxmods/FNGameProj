#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortCollectedResourceNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortCollectedResourceNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult Loot;
    
    FFortCollectedResourceNotification();
};

