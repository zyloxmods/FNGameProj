#pragma once
#include "CoreMinimal.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_LevelUp.generated.h"

class UCommonTextBlock;
class UFortItemDefinition;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_LevelUp : public UFortNotificationEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Reward_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Reward_Preview_Shadow;
    
public:
    UFortNotificationEntry_LevelUp();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestRewardVisuals(const UFortItemDefinition* RewardItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLevelUpVisuals(const UFortItemDefinition* RewardItem);
    
};

