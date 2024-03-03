#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortChallengeSetStyle.h"
#include "ObjectiveFinishedDisplayingDelegate.h"
#include "FortQuestObjectiveEntry.generated.h"

class UFortItemDefinition;
class UFortQuestObjectiveInfo;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuestObjectiveEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveFinishedDisplaying OnFinishedDisplaying;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestObjectiveInfo* MyObjectiveInfo;
    
public:
    UFortQuestObjectiveEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLevelUpObjectiveVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDefaultObjectiveVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharmObjectiveVisuals(const FFortChallengeSetStyle& DisplayStyle, const FText& CharmName, const TSoftObjectPtr<UTexture2D>& CharmIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateChallengeBundleObjectiveVisuals(const FFortChallengeSetStyle& DisplayStyle, const FText& ChallengeBundleName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDisplayingObjective();
    
    UFUNCTION(BlueprintCallable)
    void ShowingCompletionReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRewardVisuals(const UFortItemDefinition* RewardDef, const FText& SourceText, const FText& TypeText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveInfoSet(const UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement, bool bQuestCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideRewardVisuals();
    
};

