#pragma once
#include "CoreMinimal.h"
#include "McpLootResult.h"
#include "FortMissionAlertClaimData.h"
#include "FortMissionAlertRecord.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMissionAlertRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionAlertClaimData> ClaimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpLootResult PendingMissionAlertRewards;
    
    FFortMissionAlertRecord();
};

