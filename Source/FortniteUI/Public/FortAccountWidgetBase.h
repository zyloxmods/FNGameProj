#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSeasonBannerLevel.h"
#include "FortItemQuantityPair.h"
#include "FortPublicAccountInfo.h"
#include "FortAccountWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAccountWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortAccountWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAccountInfoChanged(const FFortPublicAccountInfo& Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaSeasonBannerLevel GetSeasonBannerInfo(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextSeasonReward(FFortItemQuantityPair& Reward, int32& RewardLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextSeasonChaseReward(FFortItemQuantityPair& Reward, int32& RewardLevel, int32 StartingLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentSeasonNumberAsText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentChapterAsText() const;
    
};

