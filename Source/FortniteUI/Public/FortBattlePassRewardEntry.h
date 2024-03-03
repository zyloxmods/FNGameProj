#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "FortBattlePassRewardEntry.generated.h"

class UCommonTextBlock;
class UFortItem;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassRewardEntry : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SocialUserName;
    
public:
    UFortBattlePassRewardEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSocialPlayerProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRotatingReward(UFortItem* InReward, bool bHasAdditionalStylesToDisplay, const TSoftObjectPtr<UTexture2D>& RewardTexture, bool bIsFreeItem, bool bOwnsBattlePass, int32 SeasonLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetReward(UFortItem* InReward, int32 TierLevel, float TierProgress, bool bIsLastEntry, bool bHasAdditionalStylesToDisplay, const TSoftObjectPtr<UTexture2D>& RewardTexture, bool bIsFreeItem, bool bOwnsBattlePass, int32 SeasonLevel, bool bIsFirstEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotateReward(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadSocialIcon(bool bSuccess, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutSocialUserComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutSocialUser(bool bCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInSocialUser();
    
    
    // Fix for true pure virtual functions not being implemented
};

