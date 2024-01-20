#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortMissionAlertCompleteNotification.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMissionAlertCompleteNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootGranted;
    
    FFortMissionAlertCompleteNotification();
};

