#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeDetailBase.h"
#include "AthenaChallengeDetailRewardTrack.generated.h"

class UCommonWidgetSwitcher;
class UDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengeDetailRewardTrack : public UAthenaChallengeDetailBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRewardsBeforeScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowWrapping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScrollingRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBundleLevelBeingViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRewardBeingViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_RewardTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_RewardTrack_Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_RewardTrack_Scroll;
    
public:
    UAthenaChallengeDetailRewardTrack();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePreviewItemChanged(int32 RewardIndexToView);
    
};

