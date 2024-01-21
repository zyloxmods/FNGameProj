#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "FortAccountItemDefinition.h"
#include "FortChallengeBundleQuestEntry.h"
#include "FortChallengeBundleRewards.h"
#include "FortChallengeBundleSpecialOffer.h"
#include "FortChallengeSetStyle.h"
#include "FortChallengeBundleItemDefinition.generated.h"

class UAthenaCharacterItemDefinition;
class UFortQuestItem;
class UFortQuestItemDefinition;
class UFortQuestManager;
class UMaterial;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortChallengeBundleItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleQuestEntry> QuestInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleRewards> BundleCompletionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleSpecialOffer> SpecialOffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortChallengeSetStyle DisplayStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference OverrideRewardItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* CharacterOverrideForRewardPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChainDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> BundleHidenImageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UniqueLockedMessage;
    
public:
    UFortChallengeBundleItemDefinition();
    UFUNCTION(BlueprintCallable)
    bool IsLinearChainQuest(const UFortQuestItemDefinition* InQuestDef, int32& ChainLength, int32& ChainPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardCompletionThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuests(UFortQuestManager* QuestManager, const TArray<UFortQuestItem*>& GrantedQuests, TArray<UFortQuestItem*>& OwnedQuests, TArray<UFortQuestItemDefinition*>& UnownedQuests, bool bGetAllQuestsInChain) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVisibleQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAthenaRewardItemReference> GetCompletionRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCalendarEventName() const;
    
};

