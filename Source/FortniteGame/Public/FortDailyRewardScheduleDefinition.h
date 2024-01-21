#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortDailyRewardScheduleDisplayData.h"
#include "FortDailyRewardScheduleDefinition.generated.h"

class UDataTable;
class UFortDailyRewardScheduleTokenDefinition;

USTRUCT(BlueprintType)
struct FFortDailyRewardScheduleDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScheduleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortDailyRewardScheduleTokenDefinition> EnablingToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDailyRewardScheduleDisplayData DisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime BeginDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
    FORTNITEGAME_API FFortDailyRewardScheduleDefinition();
};

