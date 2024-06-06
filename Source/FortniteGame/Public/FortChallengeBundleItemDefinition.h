#pragma once
#include "CoreMinimal.h"
#include "AthenaRewardItemReference.h"
#include "EBundleStyleColor.h"
#include "FortAccountItemDefinition.h"
#include "FortChallengeBundleLevel.h"
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
    TArray<TSoftObjectPtr<UFortQuestItemDefinition>> SuppressedQuestDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleRewards> BundleCompletionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleLevel> BundleLevelRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortChallengeBundleSpecialOffer> SpecialOffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortQuestItemDefinition>> CareerQuestBitShifts;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideFromMapChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideRewardFromMapChallenges;
    
public:
    UFortChallengeBundleItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinearChainQuest(const UFortQuestItemDefinition* InQuestDef, int32& ChainLength, int32& ChainPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalNumberOfQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardCompletionThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuests(UFortQuestManager* QuestManager, const TArray<UFortQuestItem*>& GrantedQuests, TArray<UFortQuestItem*>& OwnedQuests, TArray<UFortQuestItemDefinition*>& UnownedQuests, bool bGetAllQuestsInChain) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVisibleQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQuests() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHexCodeForStyleColor(EBundleStyleColor DesiredColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortChallengeSetStyle GetDisplayStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAthenaRewardItemReference> GetCompletionRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCalendarEventName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBundleLevelForQuest(const UFortQuestItemDefinition* QuestDef) const;

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("ChallengeBundle", GetFName());
    }
};

