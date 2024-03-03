#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CreativeQuestData.h"
#include "ECreativeQuestSharing.h"
#include "ECreativeQuestStat.h"
#include "EDeathCause.h"
#include "EShowProgressMode.h"
#include "QuestOnConditionsMetDelegateDelegate.h"
#include "CreativeQuestComponent.generated.h"

class AController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UCreativeQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FQuestOnConditionsMetDelegate OnConditionsMetDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECreativeQuestStat StatToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECreativeQuestSharing SharingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TargetTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AssignedToTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EDeathCause TargetDeathCause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSelfEliminationsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestUpdate, meta=(AllowPrivateAccess=true))
    int32 MinigameTargetAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestUpdate, meta=(AllowPrivateAccess=true))
    bool bShowQuestOnHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EShowProgressMode ShowProgressMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShowCompleteEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestActive, meta=(AllowPrivateAccess=true))
    TArray<FCreativeQuestData> QuestIndividualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestUpdate, meta=(AllowPrivateAccess=true))
    TArray<int32> QuestTeamProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestUpdate, meta=(AllowPrivateAccess=true))
    int32 QuestAllProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuestActive, meta=(AllowPrivateAccess=true))
    TArray<bool> QuestTeamActive;
    
public:
    UCreativeQuestComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterQuest();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAmount(AController* ForPlayer, int32 NewAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveFor(AController* Player, bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetQuestProgress();
    
    UFUNCTION(BlueprintCallable)
    void RegisterQuest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveFor(AController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmount(AController* ForPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AController*> GetActiveSharedControllers(AController* Instigator) const;
    
};

