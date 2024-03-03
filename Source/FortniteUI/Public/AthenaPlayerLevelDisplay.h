#pragma once
#include "CoreMinimal.h"
#include "EBPStatus.h"
#include "FortAccountWidgetBase.h"
#include "AthenaPlayerLevelDisplay.generated.h"

class UAthenaSeasonItemRewardIcon;
class UCommonTextBlock;
class UFortItem;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPlayerLevelDisplay : public UFortAccountWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemRewardIcon* RewardIcon;
    
public:
    UAthenaPlayerLevelDisplay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBPStatus(EBPStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateXpBar(float Progress, bool bIsMaxLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateRewardIcon(const UFortItem* RewardItem, const TSoftObjectPtr<UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
    
};

