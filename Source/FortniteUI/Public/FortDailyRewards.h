#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortDailyRewardsData.h"
#include "FortDailyRewards.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDailyRewards : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortDailyRewards();
private:
    UFUNCTION(BlueprintCallable)
    bool TryGetDailyRewardsData(FFortDailyRewardsData& OutDailyRewardsData, int32 ItemCardsPerSchedule, int32 MinEpicRewards);
    
    UFUNCTION(BlueprintCallable)
    bool TryClaimDailyRewards();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDailyRewards();
    
};

