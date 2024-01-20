#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortDailyRewardsScheduleData.h"
#include "FortDailyRewardsSchedule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortDailyRewardsSchedule : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDailyRewardsScheduleData ScheduleData;
    
    UFortDailyRewardsSchedule();
};

