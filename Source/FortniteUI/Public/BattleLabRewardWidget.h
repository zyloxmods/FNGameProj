#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "GameplayTagContainer.h"
#include "BattleLabDisplayData.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "BattleLabRewardWidget.generated.h"

class UFortQuestItem;
class UFortQuestObjectiveInfo;

UCLASS(Blueprintable, EditInlineNew)
class UBattleLabRewardWidget : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> CompletedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> NewlyGrantedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> GrantedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> OldQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
public:
    UBattleLabRewardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWidget(const FBattleLabDisplayData& DisplayData);
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetIsFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestsGranted(const TArray<UFortQuestItem*>& Quests);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestCompleted(const TArray<UFortQuestItem*>& Quests);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

