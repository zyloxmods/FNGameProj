#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassRewardInfo.h"
#include "Templates/SubclassOf.h"
#include "BattlePassListViewScreen.generated.h"

class UAthenaSeasonItemDefinition;
class UBattlePassLeaderboard;
class UBattlePassScreenListView;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassListViewScreen : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBattlePassLeaderboard> FriendLeaderboardClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenListView* ListView_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SocialUserRightCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SocialUserLeftCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* CachedSeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBattlePassRewardInfo> AllActiveSeasonRewards;
    
public:
    UBattlePassListViewScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleRotateReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleFriendLeaderboard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnUpdatedVisibleFriendCount(int32 LeftFriendCount, int32 RightFriendCount);
    
};

