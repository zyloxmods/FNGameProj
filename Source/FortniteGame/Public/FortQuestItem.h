#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EFortQuestState.h"
#include "FortAccountItem.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortMissionInstancedConfigData.h"
#include "FortRewardInfo.h"
#include "FortQuestItem.generated.h"

class UFortMissionConfigData;
class UFortQuestItemDefinition;
class UFortQuestObjectiveInfo;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQuestItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestObjectiveInfo*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastNotifiedQuestCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestState quest_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool sent_new_notification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime last_state_change_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> CompletionCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSentCompleteNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllObjectivesComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString twitch_broadcaster_channel_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expiry_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString quest_pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortMissionInstancedConfigData InstancedConfigData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString challenge_linked_quest_given;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString challenge_linked_quest_parent;
    
public:
    UFortQuestItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayOverallQuestInformation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisibleToUser(bool bAllowClaimedQuestsToBeVisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestPinned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveWithNameInProgress(FName BackendName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveInProgress(FDataTableRowHandle ObjectiveStatHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncludedInCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisibleRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuestExpired(FDateTime UtcNow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedObjectiveWithName(FName BackendName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedObjective(FDataTableRowHandle ObjectiveStatHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTwitchBroadcasterChannelId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortRewardInfo GetRewardInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetRemainingExpirationDuration(FDateTime UtcNow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortQuestState GetQuestState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetQuestPool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetQuestDefinitionBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemInstanceQuantityPair> GetPreviewSelectableRewards(int32 RewardIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemInstanceQuantityPair> GetPreviewRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemInstanceQuantityPair> GetPreviewAllSelectableRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentageComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestObjectiveInfo* GetObjectiveInfo(FDataTableRowHandle ObjectiveStatHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumObjectivesComplete() const;
    
    UFUNCTION(BlueprintCallable)
    UFortMissionConfigData* GetMissionConfigData(FGameplayTag InBucketTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortRewardInfo GetChallengeChainRewardInfo(bool bGetCurrentChainQuestOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetBroadcasterGrantWindowEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAchievedCount(int32& OutTotalAchievedCount, int32& OutTotalRequiredCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesQuestExpire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPinQuest() const;
    
};

