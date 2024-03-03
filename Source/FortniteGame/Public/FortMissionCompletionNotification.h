#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortMissionCompletionNotification.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionCompletionNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasCritical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult LootGranted;
    
    FORTNITEGAME_API FFortMissionCompletionNotification();
};

