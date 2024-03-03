#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortChallengeBundleItem.generated.h"

class UFortChallengeBundleItemDefinition;
class UFortQuestItem;
class UFortQuestItemDefinition;
class UFortQuestManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortChallengeBundleItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 num_quests_completed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 num_progress_quests_completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GrantedQuestInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max_allowed_bundle_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString challenge_bundle_schedule_id;
    
public:
    UFortChallengeBundleItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuests(UFortQuestManager* QuestManager, TArray<UFortQuestItem*>& OwnedQuests, TArray<UFortQuestItemDefinition*>& UnownedQuests, bool bGetAllQuestsInChain) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentageComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortChallengeBundleItemDefinition* GetChallengeDefinitionBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAchievedCount(int32& OutTotalAchievedCount, int32& OutTotalRequiredCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLevelUpBundle() const;
    
};

