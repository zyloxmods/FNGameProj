#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EFortQuestRewardType.h"
#include "EFortQuestSubtype.h"
#include "EFortQuestType.h"
#include "FortAccountItemDefinition.h"
#include "FortHiddenRewardQuantityPair.h"
#include "FortItemQuantityPair.h"
#include "FortMcpQuestObjectiveInfo.h"
#include "FortMcpQuestRewardInfo.h"
#include "FortMissionConfigDataParams.h"
#include "FortQuestMissionCreationContext.h"
#include "FortRewardInfo.h"
#include "FortQuestItemDefinition.generated.h"

class UDataTable;
class UFortAbilitySet;
class UFortConversation;
class UFortQuestItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UFortQuestItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Quest", GetFName());
    }
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestType QuestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestSubtype QuestSubtype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDisplayOverallQuestInformation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAthenaUpdateObjectiveOncePerMatch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAthenaMustCompleteInSingleMatch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateObjectiveOncePerMatch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsStreamingRequired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExpandsStormShield: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressQuestGrantedEvent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitiallySuppressedReplacementQuest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludedInCategories: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoLaunch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeprecated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableBackendConditionEvaluation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTileMatching: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayNowNavigation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowMissionAlertMatchesBypassingTileRequirements: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTutorialQuest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideStageDescription: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideIncompleteObjectiveLocations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpirationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveCompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RewardsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortHiddenRewardQuantityPair> HiddenRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FeatureRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMcpQuestRewardInfo> SelectableRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMcpQuestObjectiveInfo> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Prerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> PrerequisiteQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrerequisiteObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GranterWindowPeriodMinutes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GranterCooldownPeriodSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortConversation> IntroConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortConversation> SelectRewardsConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortConversation> ClaimConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardHeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CompletionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestMissionCreationContext> MissionCreationContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMissionConfigDataParams MissionConfigMetadata;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ClaimPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> QuestAbilitySet;
    
public:
    UFortQuestItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayOverallQuestInformation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoLaunch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPunchCardQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncludedInCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGroupChallenge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlyphQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeatQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeprecated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUpdateObjectiveOncePerMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortConversation* GetSelectRewardsConversation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortMcpQuestRewardInfo> GetSelectableRewards_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortQuestRewardType GetRewardType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemQuantityPair> GetRewards_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortRewardInfo GetRewardInfo_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRewardHeaderText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRewardDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortQuestType GetQuestType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestItemDefinition* GetPrerequisiteQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetPrerequisiteObjective() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartialObjectiveCompletionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortMcpQuestObjectiveInfo> GetObjectives_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetObjectiveNeededToComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortConversation* GetIntroConversation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortHiddenRewardQuantityPair> GetHiddenRewards_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCompletionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortConversation* GetClaimConversation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortRewardInfo GetChallengeChainRewardInfo(bool bGetAllQuestRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAthenaUpdateObjectiveOncePerMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAthenaObjectiveMustBeCompletedInASingleMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExpandsStormShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPartyAssist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowsTileMatching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowsPlayNowNavigation() const;
    
};

