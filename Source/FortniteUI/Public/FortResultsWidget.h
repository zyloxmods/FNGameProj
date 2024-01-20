#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortCompletionResult.h"
#include "FortClientEventInterface.h"
#include "EFortRewardItemType.h"
#include "FortResultsWidget.generated.h"

class UFortItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortResultsWidget : public UCommonActivatablePanel, public IFortClientEventInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalGrantedMissionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> RewardedBadges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> MissedBadges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> RewardedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> RewardedAccountItems;
    
public:
    UFortResultsWidget();
    UFUNCTION(BlueprintCallable)
    void TriggerSetupTeleportCameraEvent();
    
    UFUNCTION(BlueprintCallable)
    void SendEndOfRoundUpVoteAnalytic(const FUniqueNetIdRepl& TargetId, const FString& TargetPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SendEndOfRoundScreenAnalytic(const FString& ScreenName, bool Skipped, float TimeSpent);
    
    UFUNCTION(BlueprintCallable)
    void SendEndOfRoundFriendInviteAnalytic(const FUniqueNetIdRepl& TargetId, const FString& TargetPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void RequestExitZone();
    
    UFUNCTION(BlueprintCallable)
    void LogXPData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDataFinalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetZoneCompletionResultText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCompletionResult GetZoneCompletionResult() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalMissionPointsEarned();
    
    UFUNCTION(BlueprintCallable)
    void GetRewardsByType(EFortRewardItemType Type, TArray<UFortItem*>& OutRewards);
    
    
    // Fix for true pure virtual functions not being implemented
};

