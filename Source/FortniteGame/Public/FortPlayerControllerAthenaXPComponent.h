#pragma once
#include "CoreMinimal.h"
#include "AthenaAccolades.h"
#include "AthenaLevelInfo.h"
#include "CardSlotMedalData.h"
#include "FortControllerComponent.h"
#include "FortQuestObjectiveCompletion.h"
#include "XPEventArray.h"
#include "XPEventEntry.h"
#include "XPEventInfo.h"
#include "FortPlayerControllerAthenaXPComponent.generated.h"

class AFortPlayerController;
class UAthenaSeasonItemDefinition;
class UFortAccoladeItemDefinition;
class UFortQuestItem;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayerControllerAthenaXPComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaAccolades> PlayerAccolades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCardSlotMedalData> LocalPunchCardMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FXPEventArray EventArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FXPEventEntry> WaitingQuestXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RestXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bRegisteredWithQuestManager, meta=(AllowPrivateAccess=true))
    bool bRegisteredWithQuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaLevelInfo CachedLevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* CachedSeasonDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedSeasonMatchXpBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalXpEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MedalBonusXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SurvivalXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CombatXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MatchXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ChallengeXp;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_HasBRMatchReportCompletedProfileVer, meta=(AllowPrivateAccess=true))
    int64 HasBRMatchReportCompletedProfileVer;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_InMatchProfileVer, meta=(AllowPrivateAccess=true))
    int64 InMatchProfileVer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAccoladeItemDefinition*> MedalsEarned;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortQuestItem>> QuestsUpdated;
    
public:
    UFortPlayerControllerAthenaXPComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void QuestObjectiveUpdated(AFortPlayerController* Controller, const UFortQuestItemDefinition* QuestDef, FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool QuestCompleted);
    
    UFUNCTION(BlueprintCallable)
    void OnXpUpdated(int32 InCombatXp, int32 InServivalXp, int32 InBonusMedalXp, int32 InChallengeXp, int32 InMatchXp, int32 InTotalXp);
    
    UFUNCTION(BlueprintCallable)
    void OnXPEvent(const FXPEventInfo& XPEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InMatchProfileVer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasBRMatchReportCompletedProfileVer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bRegisteredWithQuestManager();
    
    UFUNCTION(BlueprintCallable)
    void OnProfileUpdated();
    
    UFUNCTION()
    void OnMatchResultsReported(int64 ProfileRevision);
    
    UFUNCTION()
    void OnInMatchProfileUpdate(int64 ProfileRevision);
    
    UFUNCTION(BlueprintCallable)
    void InitRestedXp();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void HighPrioXPEvent(FXPEventEntry NewHighPrioXPEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerLevelUp();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientQuestsUpdated(const TArray<FFortQuestObjectiveCompletion>& PendingQuestChanges);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientMedalsRecived(const TArray<FAthenaAccolades>& Medals);
    
};

