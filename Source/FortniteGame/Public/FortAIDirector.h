#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/CurveTable.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EDespawnAIType.h"
#include "EFortAIUtility.h"
#include "EFortDayPhase.h"
#include "EFortEncounterDirection.h"
#include "EWardAffectType.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortAIEncounterPIDController.h"
#include "FortAIEncounterPIDControllerSettings.h"
#include "FortAIEncounterPawnDifficultyLevelModifier.h"
#include "FortAIEncounterQueryData.h"
#include "FortAIEncounterSpawnGroupCapsProfile.h"
#include "FortAIEncounterSpawnPointsProfile.h"
#include "FortAILootDropModifiers.h"
#include "FortAISpawnGroupUpgradeData.h"
#include "FortEncounterPawnNumberCaps.h"
#include "FortInitializationInterface.h"
#include "FortPendingStoppedEncounterData.h"
#include "FortPlayerPerformanceEstimateSettings.h"
#include "IntensityData.h"
#include "PendingSpawnInfo.h"
#include "Templates/SubclassOf.h"
#include "UtilityData.h"
#include "UtilityTypeFloatPair.h"
#include "FortAIDirector.generated.h"

class ABuildingProp_AISpawner;
class ABuildingRift;
class AFortAIController;
class AFortAIPawn;
class AFortAthenaAIBotController;
class AFortPawn;
class AFortPlayerControllerZone;
class AFortPlayerPawn;
class IFortAthenaAILODSettings;
class UFortAthenaAILODSettings;
class IFortPatrolWardInterface;
class UFortPatrolWardInterface;
class UCurveFloat;
class UEQSRenderingComponent;
class UFortAIDirectorDataTrackingSettings;
class UFortAIEncounterInfo;
class UFortAIEncounterSequence;
class UFortDifficultyEncounterSettings;
class UReporterGraph;

UCLASS(Blueprintable, Config=Game)
class AFortAIDirector : public AActor, public IFortInitializationInterface, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MaxAliveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MinAliveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntensityData IntensityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterPIDController AIDirectorPIDController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterPIDControllerSettings PIDControllerSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtilityData UtilityContributionData[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnreachableLocationPathCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerPerformanceEstimateSettings PlayerPerformanceEstimateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePrototypeEnemies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceByPassNavMeshForAISpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortEncounterDirection::Type>> DebugEncounterDirections;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDespawnAIType DespawnAIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DebugSpawnAIGroupTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DebugEncounterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstSpawnThreatVisualsEndDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterSpawnGroupCapsProfile> EncounterSpawnGroupCapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterSpawnPointsProfile> EncounterSpawnPointsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterPawnDifficultyLevelModifier> EncounterPawnDifficultyLevelModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAISpawnGroupUpgradeData> SpawnGroupUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuaranteedUpgradeGroupUtilityBonus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscreteEncounterUtilityDesireMappings[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAIUtility::Type> InitialDynamicUtilities[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo SpawnLocationPlacementQueries[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo SpawnLocationActorSearchQueries[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIDirectorDataTrackingSettings* DataTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> BaseLootDropData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAILootDropModifiers> LootDropModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery LootDropDenialQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugEncounterQueries: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerZone*> PlayerControllersForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> PlayerPawnsForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIController*> AIControllersForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> AIPawnsForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAIBotController*> AIPlayerBotControllersForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> AIPlayerBotPawnsForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAIBotController*> AINonPlayerBotControllersForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> AINonPlayerBotPawnsForBVTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> NonPlayerBotPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> PlayerBotPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> PlayerPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> FortAIPawns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLODSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsyncProcessUpdateAliveAIs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowProcessPlayerTargeting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumLODAIProcessPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterPawnNumberCaps DefaultEncounterPawnCaps;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* IntensityGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* UtilitiesGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* PIDValuesGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* PIDContributionsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bNightActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAIDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisteredForDayPhaseChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseSpawnCap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NightEncounterFailureBreatherTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterPawnSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIEncounterInfo> DefaultNightEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIEncounterInfo> DummyDebugEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIEncounterInfo> BaseEncounterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumActiveAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPendingCapRelevantAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPendingSpawnInfo> PendingSpawns;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAISpawnedPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAIDespawnedPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DespawnAllAIMaxAIDespawnedPerFrame;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortAIPawn>> PendingDespawns;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWorldSubdivides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAISpawnDistanceFromPlayers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AmbientThreatPreferredPlacementActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AmbientThreatRequiredPlacementActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAIEncounterInfo*> ActiveEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAIEncounterInfo*> InactiveEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPendingStoppedEncounterData> PendingStoppedEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* ActiveDefaultEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* ActiveDummyDebugEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAIEncounterSequence*> EncounterSequences;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEQSRenderingComponent* EQSRenderingComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugGraphUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNormalLODDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIRelevantDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterRelevantDistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterRelevantDistanceToDefender;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IFortPatrolWardInterface>> PatrolWards;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxTotalActiveAliveAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxEncounterActiveAliveAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxSPUsed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUtilityTypeFloatPair> DebugEncounterTopUtilityPercentages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> DebugEncounterSpawnPointsCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugAllowEncounterModifierTags: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SimulatedNumberOfPlayersForAIEncounters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfEncounterGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingProp_AISpawner*> RegisteredAISpawners;
    
public:
    AFortAIDirector();
    UFUNCTION(BlueprintCallable)
    void UnregisterPatrolWard(TScriptInterface<IFortPatrolWardInterface> PatrolWard);
    
    UFUNCTION(BlueprintCallable)
    UFortAIEncounterInfo* StartEncounter(UPARAM(Ref) FString& EncounterInstigator, UFortDifficultyEncounterSettings* DifficultyEncounterSettings, FFortAIEncounterQueryData OptionalQueryData);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPatrolWard(TScriptInterface<IFortPatrolWardInterface> PatrolWard);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePawnSpawned(AFortPawn* SpawnedPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void PostDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRampStarted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSpawn(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDied(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPeakStarted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnDied(AFortAIPawn* KilledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeStarted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnDirectorDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointTooCloseToPatrolWards(const FVector& Point, const EWardAffectType WardEffectTypeFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLineTooCloseToPatrolWards(const FVector& LineStart, const FVector& LineEnd) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyEncounterGoalWithinDistanceOfPoint(const FVector& Point, float Distance, bool bOnlyActiveEncounters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAIRelevantToPlayer(AFortPlayerPawn* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyActiveEncounterRelevantToPlayer(AFortPlayerPawn* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyActiveEncounterRelevantToDefender(AFortAIPawn* Defender) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVectorFromEncounterDirection(TEnumAsByte<EFortEncounterDirection::Type> Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABuildingRift*> GetRiftsFromClosestActiveEncounterTo(AActor* Target) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumPlayers() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumActiveEncounters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EFortEncounterDirection::Type> GetEncounterDirectionFromVector(FVector DirectionVector);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void GetAmbientThreatEncounterSpawnLocations(TArray<FVector>& AmbientThreatEncounterSpawnLocations) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<TEnumAsByte<EFortEncounterDirection::Type>> ConvertInvalidDirectionsToValidDirections(TArray<TEnumAsByte<EFortEncounterDirection::Type>> InvalidDirections);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Activate();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

