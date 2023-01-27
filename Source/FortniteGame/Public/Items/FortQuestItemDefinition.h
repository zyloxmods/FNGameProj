// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "FortQuestItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UFortQuestItemDefinition : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:
	/*
	UPROPERTY(EditAnywhere)
		EFortQuestType QuestType;

	UPROPERTY(EditAnywhere)
		EFortQuestSubtype QuestSubtype;

	UPROPERTY(EditAnywhere)
		bool bShouldDisplayOverallQuestInformation;

	UPROPERTY(EditAnywhere)
		bool bAthenaUpdateObjectiveOncePerMatch;

	UPROPERTY(EditAnywhere)
		bool bAthenaGrantRarityToken;

	UPROPERTY(EditAnywhere)
		bool bAthenaMustCompleteInSingleMatch;

	UPROPERTY(EditAnywhere)
		bool bUpdateObjectiveOncePerMatch;

	UPROPERTY(EditAnywhere)
		bool IsStreamingRequired;

	UPROPERTY(EditAnywhere)
		bool bExpandsStormShield;

	UPROPERTY(EditAnywhere)
		bool bHidden;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortTandemCharacterData> TandemCharacterData;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> CharacterCompletionAudio;

	UPROPERTY(EditAnywhere)
		float CharacterCompletionAudioDelay;

	UPROPERTY(EditAnywhere)
		bool bSuppressQuestGrantedEvent;

	UPROPERTY(EditAnywhere)
		bool bInitiallySuppressedReplacementQuest;

	UPROPERTY(EditAnywhere)
		bool bIncludedInCategories;

	UPROPERTY(EditAnywhere)
		bool bAutoLaunch;

	UPROPERTY(EditAnywhere)
		bool bDeprecated;

	UPROPERTY(EditAnywhere)
		bool bDisableBackendConditionEvaluation;

	UPROPERTY(EditAnywhere)
		bool bAllowTileMatching;

	UPROPERTY(EditAnywhere)
		bool bAllowPlayNowNavigation;

	UPROPERTY(EditAnywhere)
		bool bAllowMissionAlertMatchesBypassingTileRequirements;

	UPROPERTY(EditAnywhere)
		bool bTutorialQuest;

	UPROPERTY(EditAnywhere)
		bool bHideStageDescription;

	UPROPERTY(EditAnywhere)
		bool bHideIncompleteObjectiveLocations;

	UPROPERTY(EditAnywhere)
		int ExpirationDuration;

	UPROPERTY(EditAnywhere)
		int ObjectiveCompletionCount;

	UPROPERTY(EditAnywhere)
		int Threshold;

	UPROPERTY(EditAnywhere)
		TArray<FFortItemQuantityPair> Rewards;

	UPROPERTY(EditAnywhere)
		UDataTable* RewardsTable;

	UPROPERTY(EditAnywhere)
		FString QuestPool;

	UPROPERTY(EditAnywhere)
		TArray<FFortHiddenRewardQuantityPair> HiddenRewards;

	UPROPERTY(EditAnywhere)
		TArray<FString> FeatureRewards;

	UPROPERTY(EditAnywhere)
		TArray<FFortMcpQuestRewardInfo> SelectableRewards;

	UPROPERTY(EditAnywhere)
		TArray<FFortMcpQuestObjectiveInfo> Objectives;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UFortQuestItemDefinition>> TransientPrerequisiteQuests;

	UPROPERTY(EditAnywhere)
		bool bGrantTransientQuestToSquad;

	UPROPERTY(EditAnywhere)
		bool bTransientAutoComplete;

	UPROPERTY(EditAnywhere)
		bool bAllowMultipleCompletionsPerMatch;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer Prerequisites;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortQuestItemDefinition> PrerequisiteQuest;

	UPROPERTY(EditAnywhere)
		FDataTableRowHandle PrerequisiteObjective;

	UPROPERTY(EditAnywhere)
		float Weight;

	UPROPERTY(EditAnywhere)
		int GranterWindowPeriodMinutes;

	UPROPERTY(EditAnywhere)
		int GranterCooldownPeriodSeconds;

	UPROPERTY(EditAnywhere)
		FDataTableRowHandle Category;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortConversation> IntroConversation;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortConversation> SelectRewardsConversation;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortConversation> ClaimConversation;

	UPROPERTY(EditAnywhere)
		FText RewardHeaderText;

	UPROPERTY(EditAnywhere)
		FText RewardDescription;

	UPROPERTY(EditAnywhere)
		FText CompletionText;

	UPROPERTY(EditAnywhere)
		FText NPCInteractionText;

	UPROPERTY(EditAnywhere)
		TArray<FFortQuestMissionCreationContext> MissionCreationContexts;

	UPROPERTY(EditAnywhere)
		FFortMissionConfigDataParams MissionConfigMetadata;

	UPROPERTY(EditAnywhere)
		int ClaimPriority;

	UPROPERTY(EditAnywhere)
		int SortPriority;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortAbilitySet> QuestAbilitySet;

	UPROPERTY(EditAnywhere)
		bool bHideQuestProgressNotification;

	UPROPERTY(EditAnywhere)
		bool bHideQuestRewardNotification;

	UPROPERTY(EditAnywhere)
		bool bForceExpiryExport;*/
};


UCLASS(BlueprintType)
class UFortChallengeBundleScheduleDefinition : public UFortAccountItemDefinition
{

	GENERATED_BODY()

public:

};