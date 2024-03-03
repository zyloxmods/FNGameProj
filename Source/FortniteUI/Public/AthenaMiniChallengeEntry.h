#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaMiniChallengeEntry.generated.h"

class UFortLazyImage;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaMiniChallengeEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* QuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* PendingQuestDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DisplayGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DisplayAchivedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingGoalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingLastKnown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingAchivedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingXpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstTimeBoosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
public:
    UAthenaMiniChallengeEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestDescription(const FText& Description);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProgressBar(int32 LastKnownCount, int32 AchivedCount, int32 GoalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerNewQuestGranted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetXpValue(int32 XpRewardValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefeshWithNewQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuestCompletedFinishFill();
    
    UFUNCTION(BlueprintCallable)
    void FinishedQuestUpdate();
    
};

