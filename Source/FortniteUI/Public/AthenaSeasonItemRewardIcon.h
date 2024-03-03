#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaSeasonItemRewardIcon.generated.h"

class UFortItem;
class UFortItemSeriesDefinition;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaSeasonItemRewardIcon : public UUserWidget {
    GENERATED_BODY()
public:
    UAthenaSeasonItemRewardIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeSeriesReward(const UFortItemSeriesDefinition* SeriesData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeReward(const UFortItem* RewardItem, const TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeReward(const UFortItem* RewardItem, const TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
    
};

