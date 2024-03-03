#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortDailyRewardScheduleDefinition.h"
#include "FortDailyRewardScheduleDefinitions.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortDailyRewardScheduleDefinitions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDailyRewardScheduleDefinition> Schedules;
    
    UFortDailyRewardScheduleDefinitions();
};

