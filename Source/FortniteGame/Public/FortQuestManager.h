#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EFortQuestType.h"
#include "EQuestMapScreenMode.h"
#include "FortQuestObjectiveCompletion.h"
#include "OnDailyQuestRerolledDelegate.h"
#include "OnDisplayDynamicQuestUpdateDelegate.h"
#include "OnPinnedQuestsUpdatedDelegate.h"
#include "OnQuestRewardClaimedDelegate.h"
#include "OnQuestSeenDelegate.h"
#include "OnQuestsCompletedDelegate.h"
#include "OnQuestsGrantedDelegate.h"
#include "OnQuestsUpdatedDelegate.h"
#include "FortQuestManager.generated.h"

class AFortPlayerController;
class AFortPlayerState;
class UDataTable;
class UFortItemDefinition;
class UFortMcpProfileSubgame;
class UFortQuestCategory;
class UFortQuestItem;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortQuestManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestsUpdated OnQuestsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestsCompleted OnQuestsCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestsGranted OnQuestsGranted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestRewardClaimed OnQuestRewardClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestSeen OnQuestSeen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestsUpdated OnNoQuestRewardsToClaim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPinnedQuestsUpdated OnPinnedQuestsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDailyQuestRerolled OnDailyQuestRerolled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayDynamicQuestUpdate OnDisplayDynamicQuestUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> CurrentQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> TrackedTempQuestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UFortQuestCategory*> CurrentCategorizedQuestsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestObjectiveCompletion> PendingChanges;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMcpProfileSubgame> BoundProfile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventQuestDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageEventFlushDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoQuestStateLogging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlatCurrentQuestsSearch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockQuestCompletion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockAthenaQuestCompletion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockStWQuestCompletion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BackendObjectiveNamesToBlock;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestTemplatesToBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestMapScreenMode QuestMapMode;
    
public:
    UFortQuestManager();
    UFUNCTION(BlueprintCallable)
    bool SetQuestPinned(UFortQuestItem* Quest, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestMapMode(EQuestMapScreenMode NewQuestMapMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendCustomStatEvent(FDataTableRowHandle ObjectiveStat, int32 Count, bool bForceFlush);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendComplexCustomStatEvent(UObject* TargetObject, FGameplayTagContainer AdditionalSourceTags, FGameplayTagContainer TargetTags, bool& QuestActive, bool& QuestCompleted, int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelfCompletedUpdatedQuest(AFortPlayerController* QuestOwner, const UFortQuestItemDefinition* QuestDef, FName BackendName, int32 CompletionCount, int32 DeltaChange, const AFortPlayerState* AssistingPlayer, bool ObjectiveCompleted, bool QuestCompleted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RerollDailyQuest(const UFortQuestItem* QuestToDiscard) const;
    
    UFUNCTION(BlueprintCallable)
    FString PopNextPendingFeatureUnlock();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void MarkQuestsSeen(bool bOnlyMarkPendingSeenQuests) const;
    
    UFUNCTION(BlueprintCallable)
    void MarkQuestSeen(UFortQuestItem* Quest);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ListChallenges(const FString& Filter) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThisAnEventQuest(const UFortQuestItemDefinition* QuestDefinition, const FString& MatchQuestEventFlag, UDataTable* QuestTable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestObjectivePartyAssisted(FName ObjectiveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestObjectiveActive(FName ObjectiveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestInProgress(const UFortQuestItemDefinition* Definition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingFeatureUnlockNotification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveWithNameInProgress(const UFortQuestItemDefinition* Definition, FName BackendName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveInProgress(const UFortQuestItemDefinition* Definition, FDataTableRowHandle ObjectiveStatHandle) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMainQuest(UFortQuestItem* Quest);
    
    UFUNCTION(BlueprintCallable)
    bool HasUnseenQuests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnsavedPrimaryMissionProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuestBeenSeenLocally(const UFortQuestItem* Quest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedQuest(const UFortQuestItemDefinition* Definition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedObjectiveWithName(const UFortQuestItemDefinition* Definition, FName BackendName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedObjective(const UFortQuestItemDefinition* Definition, FDataTableRowHandle ObjectiveStatHandle) const;
    
    UFUNCTION(BlueprintCallable)
    void GrantFirstDailyQuest();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUnseenQuestCount();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void GetSourceAndContextTags(FGameplayTagContainer& OutSourceTags, FGameplayTagContainer& OutContextTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingQuestPoolRerolls(const FString& PoolName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingDailyQuestRerolls() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItem* GetQuestWithDefinition(const UFortQuestItemDefinition* Definition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestMapScreenMode GetQuestMapMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestCategory* GetQuestCategory(UFortQuestItem* QuestItem);
    
    UFUNCTION(BlueprintCallable)
    void GetPinnedQuests(TArray<UFortQuestItem*>& OutPinnedQuestItems);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumCompletedObjectives(const UFortQuestItemDefinition* Definition);
    
    UFUNCTION(BlueprintCallable)
    UFortQuestItem* GetNextUnseenQuest(EFortQuestType QuestType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItem* GetMainQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentQuestsCategories(TArray<UFortQuestCategory*>& Categories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetCurrentQuests(TArray<UFortQuestItem*>& OutCurrentQuests) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentObjectiveCount(const UFortQuestItemDefinition* Definition, FDataTableRowHandle ObjectiveStatHandle) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCompletedQuests(TArray<UFortQuestItem*>& OutCompletedQuests);
    
    UFUNCTION(BlueprintCallable)
    UFortQuestItem* GetBroadcasterQuestWithOpenWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetBattlePassQuestsInProgress(const int32 MaxCount, const UFortItemDefinition* RequiredReward, TArray<UFortQuestItem*>& OutQuests, bool& bAllQuestsComplete) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceTriggerQuestsUpdated();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void EnableQuestStateLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableQuestStateLogging();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClaimSelectedQuestReward(const UFortQuestItem* Quest, int32 RewardIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClaimQuestReward(const UFortQuestItem* Quest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClaimNextCompletedQuestReward(EFortQuestType QuestType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanProgressQuestInCurrentZone(const UFortQuestItemDefinition* QuestItemDefinition) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AssistedPlayerUpdatedQuest(AFortPlayerController* QuestOwner, const UFortQuestItemDefinition* QuestDef, FName BackendName, int32 CompletionCount, int32 DeltaChange, const AFortPlayerState* AssistingPlayer, bool ObjectiveCompleted, bool QuestCompleted);
    
};

