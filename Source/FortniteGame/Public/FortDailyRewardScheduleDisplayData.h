#pragma once
#include "CoreMinimal.h"
#include "FortDailyRewardScheduleDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FFortDailyRewardScheduleDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EpicItemDescription;
    
    FORTNITEGAME_API FFortDailyRewardScheduleDisplayData();
};

