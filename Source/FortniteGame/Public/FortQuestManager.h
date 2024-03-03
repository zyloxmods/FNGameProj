#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EFortQuestType.h"
#include "EQuestMapScreenMode.h"
#include "FortAbilitySetHandle.h"
#include "FortQuestObjectiveCompletion.h"
#include "OnDailyQuestRerolledDelegate.h"
#include "OnDisplayDynamicQuestUpdateDelegate.h"
#include "OnObjectiveStatXPGrantedDelegate.h"
#include "OnPinnedQuestsUpdatedDelegate.h"
#include "OnQuestRewardClaimedDelegate.h"
#include "OnQuestSeenDelegate.h"
#include "OnQuestsCompletedDelegate.h"
#include "OnQuestsGrantedDelegate.h"
#include "OnQuestsUpdatedDelegate.h"
#include "OnXpDeltasUpdatedDelegate.h"
#include "FortQuestManager.generated.h"

class AFortPlayerController;
class AFortPlayerState;
class APawn;
class UDataTable;
class UFortAccoladeItem;
class UFortFeatItemDefinition;
class UFortHardcoreModifierItem;
class UFortItemDefinition;
class UFortMcpProfileSubgame;
class UFortQuestCategory;
class UFortQuestItem;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UFortQuestManager : public UObject {
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveStatXPGranted OnObjectiveStatXPGranted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXpDeltasUpdated OnXpValueDeltasUpdate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> CurrentQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> CurrentTransientQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortHardcoreModifierItem*> CurrentHardcoreModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortHardcoreModifierItem*> HardcoreModifiersToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentHardcoreModifierSrcTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAccoladeItem*> CurrentAccolades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> TrackedTempQuestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UFortQuestCategory*> CurrentCategorizedQuestsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestObjectiveCompletion> PendingChanges;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMcpProfileSubgame> BoundProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> EquippedQuestAbilities;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> EventQuestDataTables;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageEventFlushDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingEventFlushDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoQuestStateLogging;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockBRXPWhenDead;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlatCurrentQuestsSearch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockQuestCompletion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockAthenaQuestCompletion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockStWQuestCompletion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockXPEventsInAnyAAState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockAthenaQuestCompletionInCompetitive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockPartyAssist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSquadForPartyAssist;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockAthenaFeatsCompletionInCompetitive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BackendObjectiveNamesToBlock;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestTemplatesToBlock;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAthenaMCPNotifyOnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestMapScreenMode QuestMapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UFortFeatItemDefinition*> FeatsCompletedThisSession;
    
public:
    UFortQuestManager();
    UFUNCTION(BlueprintCallable)
    bool SetQuestPinned(UFortQuestItem* Quest, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestMapMode(EQuestMapScreenMode NewQuestMapMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendCustomStatEventDirect(FName ObjectiveBackendName, UFortQuestItem* QuestItem, int32 Count, bool bForceFlush);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendCustomStatEvent(FDataTableRowHandle ObjectiveStat, int32 Count, bool bForceFlush);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SendComplexCustomStatEvent(UObject* TargetObject, FGameplayTagContainer AdditionalSourceTags, FGameplayTagContainer TargetTags, bool& QuestActive, bool& QuestCompleted, int32 Count);
    
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeQuestAbilities(APawn* PlayerPawn);
    
public:
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleQuestUpdated(AFortPlayerController* QuestOwner, const UFortQuestItemDefinition* QuestDef, FName BackendName, int32 CompletionCount, int32 DeltaChange, const AFortPlayerState* AssistingPlayer, bool ObjectiveCompleted, bool QuestCompleted);
    
public:
    UFUNCTION(BlueprintCallable)
    void GrantFirstDailyQuest();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaXp(float XpAmount);
    
public:
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
    void GetQuestsFromCategory(UFortQuestCategory* Category, TArray<UFortQuestItem*>& QuestList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQuestMapScreenMode GetQuestMapMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestCategory* GetQuestCategory(UFortQuestItem* QuestItem);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerController* GetPlayerControllerBP() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetPinnedQuests(TArray<UFortQuestItem*>& OutPinnedQuestItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveCompletionCount(const UFortQuestItemDefinition* Definition, FName BackendName) const;
    
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
    void ForceCompleteAccolades(float TimerDelay, bool bSkipAcknowledgements);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableQuestStateLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableQuestStateLogging();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClaimSelectedQuestReward(const UFortQuestItem* Quest, int32 RewardIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClaimQuestReward(const UFortQuestItem* Quest) const;
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void CheckObjectiveStatUsage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanProgressQuestInCurrentZone(const UFortQuestItemDefinition* QuestItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AppendTemporaryRelevancyTags(const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, const FGameplayTagContainer& TargetTags);
    
};

