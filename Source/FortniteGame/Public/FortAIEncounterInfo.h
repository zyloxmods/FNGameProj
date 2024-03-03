#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CurveTable.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "GameplayTagContainer.h"
#include "AIEncounterSpawnGroupWeights.h"
#include "EFortAIUtility.h"
#include "EFortEncounterDirection.h"
#include "EFortEncounterPacingState.h"
#include "EFortEncounterSpawnLimitType.h"
#include "EFortEncounterState.h"
#include "EFortMissionType.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortAIBaseLootDropRow.h"
#include "FortAIEncounterPIDController.h"
#include "FortAIEncounterQueryData.h"
#include "FortAIEncounterSpawnGroupCapsCategory.h"
#include "FortAIEncounterSpawnGroupCapsProfile.h"
#include "FortAIEncounterSpawnPointsProfile.h"
#include "FortAIEncounterTimedModifierTags.h"
#include "FortAIEncounterWaveProgressEstimation.h"
#include "FortAILootDropModifierRow.h"
#include "FortAISpawnGroupUpgradeData.h"
#include "FortAISpawnerData.h"
#include "FortEncounterPawnNumberCaps.h"
#include "FortEncounterSettings.h"
#include "FortEncounterSettingsFixedPace.h"
#include "FortGoalActorEncounterDataManagerPair.h"
#include "FortIntensityCurveSequenceInstanceInfo.h"
#include "FortSpawnPointsPercentageCurveSequenceInstanceInfo.h"
#include "GameplayMutatorObserverInterface.h"
#include "OnBuildingRiftBlockedShouldDieDelegate.h"
#include "OnEncounterAllBurstEnemiesSpawnedDelegate.h"
#include "OnEncounterAllEnemiesKilledDelegate.h"
#include "OnEncounterCombatParticipationDelegate.h"
#include "OnEncounterCompletedDelegate.h"
#include "OnEncounterEnemySpawnFailedDelegate.h"
#include "OnEncounterEnemySpawnedDelegate.h"
#include "OnEncounterFadeStartedDelegate.h"
#include "OnEncounterOptionsChangedDelegate.h"
#include "OnEncounterPawnDiedDelegate.h"
#include "OnEncounterPeakStartedDelegate.h"
#include "OnEncounterRampStartedDelegate.h"
#include "OnEncounterRestStartedDelegate.h"
#include "OnEncounterRiftSpawnedDelegate.h"
#include "OnEncounterSpawnDirectionsChosenDelegate.h"
#include "OnEncounterSpawnedFinalEnemyDelegate.h"
#include "SpawnGroupInstanceInfo.h"
#include "Templates/SubclassOf.h"
#include "UtilityTypeFloatPair.h"
#include "FortAIEncounterInfo.generated.h"

class AActor;
class ABuildingRift;
class AController;
class AFortAIDirector;
class AFortAIDirectorDataManager;
class AFortAIPawn;
class AFortGameplayMutator_AIEncounterModifierTags;
class AFortGameplayMutator_AILevelVariance;
class UCurveFloat;
class UFortAIAssignment;
class UFortAIAssignmentSettings;
class UFortAIEncounterRiftManager;
class UFortAISpawnGroup;
class UFortAISpawnGroupProgressionInfo;
class UFortAbilitySet;
class UFortIntensityCurveSequenceProgression;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class UFortAIEncounterInfo : public UObject, public INavAgentInterface, public IGameplayMutatorObserverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAISpawnGroupProgressionInfo* SpawnGroupProgressionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstSpawnPointsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPointsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBreathers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle LowPlayerPerformanceBreatherTimeSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle NormalPlayerPerformanceBreatherTimeSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle HighPlayerPerformanceBreatherTimeSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUtilityTypeFloatPair> LockedUtilityValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFreeUtilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UtilityAdjustmentPeriodSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeDirectionsOnRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPointsPercentageLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PawnNumberLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterPawnNumberCaps PawnNumberCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawningIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreSpawnRequeryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettingsFixedPace EncounterSettingsFixed;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterSpawnDirectionsChosen OnEncounterSpawnDirectionsChosen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextRiftReplacementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSpawningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterSpawnGroupCapsProfile EncounterSpawnGroupCapsProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterSpawnGroupCapsCategory> AdditionalSpawnGroupCapsCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterSpawnPointsProfile EncounterSpawnPointsProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAISpawnGroupUpgradeData> AvailableUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveTableRowHandle> PawnDifficultyLevelModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIBaseLootDropRow> BaseLootDropRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAILootDropModifierRow> LootDropModifierRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequiresReinitializationFromProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle DesiredHostilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortIntensityCurveSequenceProgression* IntensitySequenceProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AliveMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterSpawnLimitType::Type> SpawnLimitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PawnNumberLimitProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointsLimitProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnLimitReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSpawnedAllBurstSpawnAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAliveCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAliveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAliveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostilityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeakTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreatherTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRampTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenBreathesSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFadeTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeEndIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeEndRemainingSpawnPointsPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionPercentageToDisableBreathers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterAllEnemiesKilled OnEncounterAllEnemiesKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterEnemySpawned OnEncounterEnemySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterEnemySpawnFailed OnEncounterEnemySpawnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterAllBurstEnemiesSpawned OnEncounterAllBurstEnemiesSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterCompleted OnEncounterCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterPawnDied OnEncounterPawnDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterSpawnedFinalEnemy OnEncounterSpawnedFinalEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterRiftSpawned OnEncounterRiftSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingRiftBlockedShouldDie OnBuildingRiftBlockedShouldDie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayThreatVisuals;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDesiredUtilities[16];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UtilitiesRequiredTags[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InjectedTagForUtilityCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLargeSpawnGroupDiscountInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSelectionToSpawningDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUtilityTypeFloatPair> CurrentDesiredUtilities;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float UtilityRecentSelectionPenalties[16];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float UtilityEffectivenessMeasurements[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle UtilityEffectivenessMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UtilityEffectivenessInfluenceCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUtilityTypeFloatPair> CurrentTopUtilityPercentages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortAIUtility::Type>> UsedTopUtilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortAIUtility::Type>> CurrentlySelectedFreeUtilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUtilitiesConsidered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactivityPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustUtilitiesDuringRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDespawnAIsDuringRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPlayerCombatFactorUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUtilityAdjustTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSpawnPointAdjustmentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastLargeGroupSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIEncounterSpawnGroupWeights> EnemySpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterPIDController EncounterPIDController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSpawnPointsCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSpawnPointsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FailSafeMinSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnGroupInstanceInfo> ActiveSpawnGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterEngagementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRelevantBuildingDamagedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRelevantBuildingDamagedDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentGroupSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterState::Type> EncounterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortEncounterPacingState::Type> PacingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPacingStateTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterWaveProgressEstimation WaveProgressEstimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DifficultyLevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAIDirector* MyAIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGoalActorEncounterDataManagerPair> DataManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyActiveAtNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRiftsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRiftsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRiftsUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostilityCurveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo DefaultEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNukeWavesAtDaybreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNukeWavesAtEncounterEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNukeWavesAtEncounterDeactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveEnemyCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHostilityLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterRampStarted OnEncounterRampStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterPeakStarted OnEncounterPeakStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterFadeStarted OnEncounterFadeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterRestStarted OnEncounterRestStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterCombatParticipation OnEncounterCombatParticipation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterOptionsChanged OnEncounterOptionsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingRift> RiftClassTemplate;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FFortAISpawnerData> ExternalAISpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterQueryData EncounterQueryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterRiftManager* RiftManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AssociatedMissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMissionType::Type> AssociatedMissionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeActive: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAIAssignment*> EncounterAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxActiveAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnPointsUsed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* OverrideSpawnPointsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendFullAnalyticsReport;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAILifespans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackCombatParticipation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ModifierTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterTimedModifierTags> TimedModifierTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameplayMutator_AILevelVariance* AILevelMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortGameplayMutator_AIEncounterModifierTags*> EncounterModifierTagsMutators;
    
public:
    UFortAIEncounterInfo();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnRegisterAISpawner(AActor* InAISpawner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnTestAIGroup(const UFortAISpawnGroup* SpawnGroupToSpawn, FVector SpawnLocation, FRotator SpawnRotation, AActor* SpawnSource, const TArray<UFortAbilitySet*> AbilitySetsToGrantOnSpawn, FFortAISpawnGroupUpgradeData UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns);
    
    UFUNCTION(BlueprintCallable)
    AFortAIPawn* SpawnAIPawnReservedForEnemySpawner(AActor* EnemySpawner, FVector SpawnLocation, FRotator SpawnRotation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPawnNumberLimit(int32 InPawnNumberLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetNukeWavesAtEncounterEnd(bool bNuke);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEncounterActivationState(bool bEncounterActivityState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RequestActivation(int32 ActivationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterAISpawner(AActor* InAISpawner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRampStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeakStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnGoalTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameDifficultyChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEncounterPawnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyRiftDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    bool GroupHasAIRemainingToSpawn(const FFortAISpawnerData& FortAISpawnerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPawnNumberLimit() const;
    
    UFUNCTION(BlueprintCallable)
    float GetEncounterTimeSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEncounterRifts(TArray<ABuildingRift*>& OutRifts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEncounterQueryActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEncounterGameplayTags(FGameplayTagContainer& OutEncounterTags) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AFortAIDirectorDataManager* GetEncounterDataManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEncounterAssignmentGoalActors(TArray<AActor*>& OutGoalActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentSpawnAreaDirections(TArray<TEnumAsByte<EFortEncounterDirection::Type>>& OutDirections) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EncounterHasReservedSpawnRequestForEnemySpawner(AActor* EnemySpawner) const;
    
    UFUNCTION(BlueprintCallable)
    UFortAIAssignment* CreateEncounterAssignment(UFortAIAssignmentSettings* AssignmentSettings, AActor* GoalActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

