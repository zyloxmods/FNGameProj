#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortMissionAlertCompleteNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionAlertCompleteNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootGranted;
    
    FORTNITEGAME_API FFortMissionAlertCompleteNotification();
};

